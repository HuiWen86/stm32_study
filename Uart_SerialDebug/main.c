//유아트 디버그 용도입니다. 테라텀에서 사용합니다. 
//USER CODE BEGIN PFP 위치에 넣습니다. 
//

/* USER CODE BEGIN PFP */

/* uart code for serial debugging --------*/
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /*__GNUC__ */
PUTCHAR_PROTOTYPE
{
	if(ch == '\n')
		HAL_UART_Transmit(&huart2, (uint8_t*)"\r", 1, 0xFFFF);
	HAL_UART_Transmit(&huart2, (uint8_t*) &ch, 1, 0xFFFF);

	return ch;
}
/* uart code for serial debugging End --------*/

/* USER CODE END PFP */



///while 문 안에 넣습니다. 아래 내용은 엔코더 테스트 중 코드입니다.  

 /* USER CODE BEGIN WHILE */
  int preEncoderCnt = 0 ;
  while (1)
  {
    /* USER CODE END WHILE */
	  if(preEncoderCnt != gEnCoderCnt)
	  {
		  preEncoderCnt = gEnCoderCnt;
		  printf("%d\n",preEncoderCnt);
	  }
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */

