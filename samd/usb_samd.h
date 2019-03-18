#pragma once

#include <sam.h>
#include "usb.h"

extern UsbDeviceDescriptor usb_endpoints[];
extern const uint8_t usb_num_endpoints;

#define USB_ALIGN __attribute__((__aligned__(4)))

#define USB_ENDPOINTS(NUM_EP) \
	const uint8_t usb_num_endpoints = (NUM_EP); \
	UsbDeviceDescriptor usb_endpoints[NUM_EP];

void usb_samd_init(uint32_t clock_id);
	
void* samd_serial_number_string_descriptor();
