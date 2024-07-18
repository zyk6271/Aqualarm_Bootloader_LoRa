/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-08-25     RT-Thread    first version
 */

#include <rtthread.h>

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define firmware_version        "BL Ver:V1.0.0\r\n"
int main(void)
{
    syswatch_init();
    uart_init();
    uart_send(firmware_version);
    flash_Init();
    qbt_startup();
    while (1)
    {
        rt_thread_mdelay(1000);
    }

    return RT_EOK;
}
