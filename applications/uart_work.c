/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-06-03     Rick       the first version
 */
#include "board.h"
#include "stdio.h"

UART_HandleTypeDef uart_handle;
#ifdef GATEWAY
void uart_init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
    uart_handle.Instance = USART2;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.OverSampling = UART_OVERSAMPLING_16;
    uart_handle.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
    uart_handle.Init.ClockPrescaler = UART_PRESCALER_DIV1;
    uart_handle.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
    if (HAL_UART_Init(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetTxFifoThreshold(&uart_handle, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetRxFifoThreshold(&uart_handle, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_DisableFifoMode(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}
#endif

#ifdef MAINUNIT
void uart_init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
    uart_handle.Instance = USART2;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.OverSampling = UART_OVERSAMPLING_16;
    uart_handle.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
    uart_handle.Init.ClockPrescaler = UART_PRESCALER_DIV1;
    uart_handle.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
    if (HAL_UART_Init(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetTxFifoThreshold(&uart_handle, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetRxFifoThreshold(&uart_handle, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_DisableFifoMode(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}
#endif

#ifdef ALLINONE
void uart_init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
    uart_handle.Instance = USART1;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.OverSampling = UART_OVERSAMPLING_16;
    uart_handle.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
    uart_handle.Init.ClockPrescaler = UART_PRESCALER_DIV1;
    uart_handle.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
    if (HAL_UART_Init(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetTxFifoThreshold(&uart_handle, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_SetRxFifoThreshold(&uart_handle, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_UARTEx_DisableFifoMode(&uart_handle) != HAL_OK)
    {
        Error_Handler();
    }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}
#endif
void uart_send(const uint8_t *data)
{
    HAL_UART_Transmit(&uart_handle, data, strlen(data), HAL_MAX_DELAY);
}
