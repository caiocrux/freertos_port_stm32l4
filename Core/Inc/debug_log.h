/*
 * debug_log.h
 *
 *  Created on: Jun 26, 2021
 *      Author: caio
 */

#ifndef INC_DEBUG_LOG_H_
#define INC_DEBUG_LOG_H_

#include "stdio.h"
#define DEBUG_ON

#if defined(DEBUG_ON)
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#define GETCHAR_PROTOTYPE int __io_getchar(void)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#define GETCHAR_PROTOTYPE int fgetc(FILE *f)
#endif /* __GNUC__ */

/* USER CODE BEGIN PD */
#define DEBUG_LOG  printf("%s:%d :",__FILE__,__LINE__);printf



#endif /* INC_DEBUG_LOG_H_ */
