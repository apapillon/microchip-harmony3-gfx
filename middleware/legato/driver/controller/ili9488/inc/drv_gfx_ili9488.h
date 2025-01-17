// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

/*******************************************************************************
  MPLAB Harmony Generated Driver Header File

  File Name:
    drv_gfx_ili9488.h

  Summary:
    Build-time generated header file for ILI9488 driver.
	
  Description:
    Build-time generated header file for top-level ILI9488 driver.
 * 
    Created with MPLAB Harmony Version 2.03
*******************************************************************************/

#ifndef DRV_GFX_ILI9488_H
#define DRV_GFX_ILI9488_H

#include "gfx/driver/gfx_driver.h"

#ifdef __cplusplus
    extern "C" {
#endif
 

//DOM-IGNORE-END

gfxResult DRV_ILI9488_Initialize(void);

void DRV_ILI9488_Update(void);

gfxResult DRV_ILI9488_BlitBuffer(int32_t x,
                           int32_t y,
                           gfxPixelBuffer* buf);
                           
gfxDriverIOCTLResponse DRV_ILI9488_IOCTL(gfxDriverIOCTLRequest req,
                                         void* arg);


static const gfxDisplayDriver gfxDriverInterface =
{
    .update = DRV_ILI9488_Update,
    .blitBuffer = DRV_ILI9488_BlitBuffer,
	.ioctl = DRV_ILI9488_IOCTL 
};

#ifdef __cplusplus
    }
#endif
    
#endif // DRV_GFX_ILI9488_H
