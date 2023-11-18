  while (1)
  {
		//HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_6);
		
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_Delay(10000);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_Delay(10000);
		
  }