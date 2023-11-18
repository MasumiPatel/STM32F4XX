void led_disp_clear(void);
void led_disp_char(unsigned char );
void led_disp_value(unsigned short );
void led_disp_string(char);

int main(void)
{

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
		led_disp_string('A');
		HAL_Delay(1000);
		led_disp_string('B');
		HAL_Delay(1000);
		led_disp_string('C');
		HAL_Delay(1000);
		led_disp_string('D');
		HAL_Delay(1000);
		led_disp_string('E');
		HAL_Delay(1000);
		led_disp_string('F');
		HAL_Delay(1000);
		led_disp_string('g');
		HAL_Delay(1000);
		led_disp_string('H');
		HAL_Delay(1000);
		led_disp_string('i');
		HAL_Delay(1000);
		led_disp_string('.');
		HAL_Delay(1000);
		
		
  }
}

void led_disp_clear(void)
{
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET); //b
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET); //dp
}
void led_disp_string(char str)
{ 	int i;
			
		for(i = 0;i < 200;i++); 
		led_disp_clear();
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,GPIO_PIN_RESET);  //EN1 low		 		
    led_disp_char(str); 	
		for(i = 0;i < 200;i++){};
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,GPIO_PIN_SET);  //EN1 high
	
				return;
	}
void led_disp_char(unsigned char ch)
{
	switch(ch)
  {
		case 0:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 1:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 2:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 3:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 4:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 5:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 6:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 7:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 8:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 9:
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
      case '0':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '1':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '2':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '3':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '4':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '5':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '6':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '7':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '8':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '9':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
		
			case 'O':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'o':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'n':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'F':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'A':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'L':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 't':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'C':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'c':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'P':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'S':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case '-':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'E':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'r':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'D':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'd':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'u':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'U':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'B':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'b':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'H':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'h':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'i':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'g':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'y':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'j':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'q':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			case 'Z':
            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET); //a
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET); //b
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET); //d
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET); //e
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET); //g
						//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;		
			case '.':
//            HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET); //a
//						HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //b
//						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET); //c
//						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET); //d
//						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET); //e
//						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET); //f
//						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET); //g
						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET); //dp
      break;
			
		}	
}
void led_disp_value(unsigned short val){
	
		HAL_Delay(1);
		led_disp_clear();
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,GPIO_PIN_RESET);  //EN1 high		 		
    led_disp_char(val); 	
		//val = val % 10000;
		HAL_Delay(1);
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,GPIO_PIN_SET);  //EN1 low
	 HAL_Delay(1);
	
}  