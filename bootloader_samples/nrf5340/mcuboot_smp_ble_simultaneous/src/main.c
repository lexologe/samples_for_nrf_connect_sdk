/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include "img_mgmt/img_mgmt.h"
#include "bluetooth_smp.h"

void main(void)
{
    img_mgmt_register_group();
    start_smp_bluetooth();
	  printk(__DATE__ " " __TIME__ " this to see it change AVC.\n");
}
