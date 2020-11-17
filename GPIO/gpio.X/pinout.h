/* 
 * File:   pinout.h
 * Author: alex2
 *
 * Created on 17 de noviembre de 2020, 11:03 AM
 */

#ifndef PINOUT_H
#define	PINOUT_H

#ifdef	__cplusplus
extern "C" {
#endif

#define efecto_pin TRISBbits.TRISB7
#define efecto_value PORTBbits.RB7

#define velocidad_pin TRISBbits.TRISB6
#define velocidad_value PORTBbits.RB6

#define INPUT 1
#define OUTPUT 0

#define HIGH 1
#define LOW

#ifdef	__cplusplus
}
#endif

#endif	/* PINOUT_H */

