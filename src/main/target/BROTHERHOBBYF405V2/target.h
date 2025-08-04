/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "BH42"
#define USBD_PRODUCT_STRING "BROTHERHOBBYF405V2"

#define USE_TARGET_CONFIG

/*** IMU generic ***/

#define USE_IMU_ICM42605

/*** Indicators ***/

#define LED0                                  PC8  // Blue
#define BEEPER                                PC5
#define BEEPER_INVERTED

/*** LED2812 ***/

#define USE_LED_STRIP
#define WS2811_PIN                            PC9

/*** PINIO ***/

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO3_PIN                            CAMERA_CONTROL_PIN //Camera control
#define CAMERA_CONTROL_PIN                    PB3

/*** UART ***/
#define USB_IO
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN                          PA9
#define UART1_RX_PIN                          PA10

#define USE_UART2
#define UART2_TX_PIN                          PA2
#define UART2_RX_PIN                          PA3 /* Same as PPM pin */

#define USE_UART3
#define UART3_TX_PIN                          PC10
#define UART3_RX_PIN                          PC11

#define USE_UART4
#define UART4_TX_PIN                          PC12
#define UART4_RX_PIN                          PD2

#define USE_UART6
#define UART6_TX_PIN                          PC6
#define UART6_RX_PIN                          PC7

#define SERIAL_PORT_COUNT                     6

/*** SPI devices ***/

#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN   	    PA6
#define SPI1_MOSI_PIN   	    PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN   	    PB14
#define SPI2_MOSI_PIN   	    PB15

/*** IMU  ***/

#define IMU_ICM42605_ALIGN      CW90_DEG
#define ICM42605_CS_PIN         PA4
#define ICM42605_SPI_BUS        BUS_SPI1

/*** MAX7456 ***/
#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PB12

/*** FLASH/Blackbox ***/

#define USE_FLASHFS

// Not sure which to use for the onboard chip (W25Q128JV)
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS BUS_SPI2
#define M25P16_CS_PIN PA15
#define USE_FLASH_W25M
#define W25M_SPI_BUS BUS_SPI2
#define W25M_CS_PIN PA15
#define USE_FLASH_W25M02G
#define W25M02G_SPI_BUS BUS_SPI2
#define W25M02G_CS_PIN PA15
#define USE_FLASH_W25M512
#define W25M512_SPI_BUS BUS_SPI2
#define W25M512_CS_PIN PA15
#define USE_FLASH_W25N01G
#define W25N01G_SPI_BUS BUS_SPI2
#define W25N01G_CS_PIN PA15

/*** External interrupts ***/
#define USE_EXTI
#define GYRO_INT_EXTI                       PC4

// #define USE_MPU_DATA_READY_SIGNAL
// #define ENSURE_MPU_DATA_READY_IS_LOW

/*** I2C ***/

#define USE_I2C
#define USE_I2C_DEVICE_2

#define I2C2_SDA                            PB11
#define I2C2_SCL                            PB10

#define USE_BARO
#define BARO_I2C_BUS                        BUS_I2C2
#define USE_BARO_DPS310
#define USE_BARO_BMP280
#define USE_BARO_MS5611

/*** ADC ***/

#define USE_ADC
#define ADC_INSTANCE ADC1

#define ADC_CHANNEL_1_PIN PC0
#define ADC_CHANNEL_2_PIN PC1
#define ADC_CHANNEL_3_PIN PC2

#define VBAT_ADC_CHANNEL ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL ADC_CHN_2
#define RSSI_ADC_CHANNEL ADC_CHN_3
#define ADC1_DMA_STREAM             DMA2_Stream0

#define VBAT_SCALE_DEFAULT 1200
#define CURRENT_METER_SCALE 386

/*** Optical Flow & Lidar ***/

/*** Misc ***/
#define DEFAULT_FEATURES                                               \
    (FEATURE_TX_PROF_SEL | FEATURE_CURRENT_METER | FEATURE_TELEMETRY | \
     FEATURE_VBAT | FEATURE_OSD)

#define USE_DSHOT
#define USE_DSHOT_DMAR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define DEFAULT_RX_TYPE RX_TYPE_SERIAL
#define SERIALRX_PROVIDER SERIALRX_CRSF
#define SERIALRX_UART SERIAL_PORT_USART6

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff

#define MAX_PWM_OUTPUT_PORTS 9
