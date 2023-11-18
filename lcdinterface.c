void lcd_init(void);
void lcd_cmd(unsigned char );
void lcd_display(unsigned char );


void lcd_write_high_nibble(unsigned char );
void lcd_write_low_nibble(unsigned char );

void lcd_print_value(unsigned short);
void lcd_print_msg(unsigned char ,char* );

int main(void)
{
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  /* Initialize lcd display */
lcd_init();
  while (1)
  {
		lcd_print_msg(0xC0,"Masumi");
   }

}

void lcd_init(void)
{
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_2,GPIO_PIN_RESET);  //RS = low;  
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,GPIO_PIN_RESET); //EN = low;
    
    //...................................
    HAL_Delay(10); //10ms
    lcd_write_high_nibble(0x30);
    HAL_Delay(10); //10ms
    lcd_write_high_nibble(0x30);
    HAL_Delay(10); //10ms
    lcd_write_high_nibble(0x30);
    HAL_Delay(10); //10ms
    lcd_write_high_nibble(0x20);
    HAL_Delay(10); //10ms
    //...................................
     
lcd_cmd(0x28);  //2x16 Character 5x7 : 4 bit mode
		lcd_cmd(0x0C);  // Display ON Cursor OFF //0x0c
    lcd_cmd(0x06);  //entry mode
    lcd_cmd(0x01);  // clear screen
		lcd_print_msg(0x80,"hai");
		lcd_print_msg(0xC0,"welcome");
}
void lcd_cmd(unsigned char cmd)  
{
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_2,GPIO_PIN_RESET);  //RS = low; 
    HAL_Delay(1); //1ms
    lcd_write_high_nibble(cmd);       
    lcd_write_low_nibble(cmd);   
 }
void lcd_display(unsigned char dat)   
{
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_2,GPIO_PIN_SET);  //RS = high; 
    HAL_Delay(1); //1ms
    lcd_write_high_nibble(dat);    
    lcd_write_low_nibble(dat);
}
void lcd_write_high_nibble(unsigned char c)
{
	if (c & 0x10)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET); 
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET);

	if (c & 0x20)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET); 
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET);

	if (c & 0x40)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); 
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);

	if (c & 0x80)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_SET); 
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET);
        
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,GPIO_PIN_SET); //EN = high;
    HAL_Delay(1); //1ms
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,GPIO_PIN_RESET); //EN = low;
    HAL_Delay(1); //1ms
		
}
void lcd_write_low_nibble(unsigned char c)
{	
	if (c & 0x01)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET); 
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET);

	if (c & 0x02)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET);

	if (c & 0x04)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);

	if (c & 0x08)
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET);
        
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,GPIO_PIN_SET); //EN = high;
    HAL_Delay(1); //1ms
    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,GPIO_PIN_RESET); //EN = low;
    HAL_Delay(1); //1ms
}
void lcd_print_value(unsigned short value)
{
	unsigned char length = 0;
	unsigned short div = 1,test;
	
	test = value;
	do{
			length += 1;
			if(length == 1)
				div = 1;
			else 
				div = div * 10;
			test = test/10;		
	}while(test);
	  while( length )
  {
      lcd_display( (value / div) + 48 );   // write highest digit first
      value = value % div;
      length--;
      div /= 10;
  }  
}
void lcd_print_msg(unsigned char addr,char* msg)
{
    char j;
    lcd_cmd(addr);   
    j=0;
    while(msg[j]!='\0')
    {
      lcd_display(msg[j]);
      j++;
    }
    
}