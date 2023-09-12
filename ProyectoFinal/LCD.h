/*
 * LCD.h
 *
 *  Created on: 22 abr 2022
 *      Author: javav
 */

#ifndef LCD_H_
#define LCD_H_
#define E (0x01)        // definir para BIT0
#define RS (0x02)       // definir para BIT1

unsigned char *PunteroTabla;        // tabla de datos
unsigned char ContDatos;            // contador de datos
unsigned char Variable;             // variable de uso general
unsigned char CopiaVariable; // auxiliar de respaldo de la variable de uso general
unsigned char VariableLow;          // variable de uso general

void wr_lcd(void);
void displayinicio(void);
void renglon1(void);
void cambiorenglon(void);
void renglon2(void);
void LCDdato(unsigned char);

#endif /* LCD_H_ */
