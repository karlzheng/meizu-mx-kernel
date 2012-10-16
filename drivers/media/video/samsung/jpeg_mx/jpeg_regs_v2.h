/* linux/drivers/media/video/samsung/jpeg_mx/jpeg_regs_v2.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Header file of the register interface for jpeg v2.x driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __JPEG_REGS_V2_H__
#define __JPEG_REGS_V2_H__

#include "jpeg_core.h"

void jpegv2_sw_reset(void __iomem *base);
void jpegv2_set_enc_dec_mode(void __iomem *base, enum jpeg_mode mode);
void jpegv2_set_dec_out_fmt(void __iomem *base,
					enum jpeg_frame_format out_fmt);
void jpegv2_set_enc_in_fmt(void __iomem *base,
					enum jpeg_frame_format in_fmt);
void jpegv2_set_enc_out_fmt(void __iomem *base,
					enum jpeg_stream_format out_fmt);
void jpegv2_set_enc_tbl(void __iomem *base);
void jpegv2_set_interrupt(void __iomem *base);
unsigned int jpegv2_get_int_status(void __iomem *base);
void jpegv2_set_huf_table_enable(void __iomem *base, int value);
void jpegv2_set_dec_scaling(void __iomem *base,
		enum jpeg_scale_value x_value, enum jpeg_scale_value y_value);
void jpegv2_set_sys_int_enable(void __iomem *base, int value);
void jpegv2_set_stream_buf_address(void __iomem *base, unsigned int address);
void jpegv2_set_stream_size(void __iomem *base,
		unsigned int x_value, unsigned int y_value);
void jpegv2_set_frame_buf_address(void __iomem *base,
		enum jpeg_frame_format fmt, unsigned int address,
		unsigned int address_2p, unsigned int address_3p);
void jpegv2_set_encode_tbl_select(void __iomem *base,
		enum jpeg_img_quality_level level);
void jpegv2_set_encode_hoff_cnt(void __iomem *base, enum jpeg_stream_format fmt);
void jpegv2_set_dec_bitstream_size(void __iomem *base, unsigned int size);
unsigned int jpegv2_get_stream_size(void __iomem *base);
void jpegv2_get_frame_size(void __iomem *base,
			unsigned int *width, unsigned int *height);

enum jpeg_stream_format jpegv2_get_frame_fmt(void __iomem *base);

#endif /* __JPEG_REGS_V2_H__ */
