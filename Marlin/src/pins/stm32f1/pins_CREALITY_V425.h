/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * CREALITY v4.2.5 (STM32F103) board pin assignments
 */

#define BOARD_INFO_NAME      "Creality v4.2.5"
#define DEFAULT_MACHINE_NAME "Creality3D"

#define CASE_LIGHT_PIN      PC14
#define FAN1_PIN            PC0
#define Y_STOP_PIN          PA4

#define ONBOARD_SD_CS_PIN   PC9

#define SERVO0_PIN          PB1
#define Z_MIN_PROBE_PIN     PB0

#include "pins_CREALITY_V4210.h"
