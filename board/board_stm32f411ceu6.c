/*
 * board_stm32f411ceu6.c
 *
 *  Created on: Nov 20, 2025
 *      Author: werlley
 */

#include "board.h"


void board_start();
void board_i2c_lock();
void board_i2c_unlock();
void board_spi_lock();
void board_spi_unlock();
void board_clrc663_deselect();
void board_clrc663_select();
void board_clrc663_txrx(uint8_t *tx, uint8_t *rx, uint32_t len);
void board_eeprom_write(uint32_t i2cAddress, uint32_t memAddress, uint8_t memAddrSize, uint8_t *data, uint32_t len);
void board_eeprom_read(uint32_t i2cAddress, uint32_t memAddress, uint8_t memAddrSize, uint8_t *data, uint32_t len);
void board_ledOn();
void board_LedOff();
void board_btn_sel();
void board_btn_enter();
