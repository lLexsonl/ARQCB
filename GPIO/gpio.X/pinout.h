/* 
 * File:   pinout.h
<<<<<<< HEAD
 * Author: alex2
 *
 * Created on 17 de noviembre de 2020, 11:03 AM
 */

=======
 * Author: ASUS
 *
 * Created on 17 de noviembre de 2020, 08:24 AM
 */

#include <xc.h>

>>>>>>> 52d139fa3ee4e18d1a24ab34a3c8c66ff3bc03e8
#ifndef PINOUT_H
#define	PINOUT_H

#ifdef	__cplusplus
extern "C" {
#endif

<<<<<<< HEAD
#define efecto_pin TRISBbits.TRISB7
#define efecto_value PORTBbits.RB7

#define velocidad_pin TRISBbits.TRISB6
#define velocidad_value PORTBbits.RB6

#define INPUT 1
#define OUTPUT 0

#define HIGH 1
#define LOW

=======
#define INPUT 1
#define OUTPUT 0

#define ON 1
#define OFF 0
    
#define BTN_EFECTO TRISBbits.TRISB7
#define CFG_LEDS TRISD
#define LEDS LATD
    
    
>>>>>>> 52d139fa3ee4e18d1a24ab34a3c8c66ff3bc03e8
#ifdef	__cplusplus
}
#endif

#endif	/* PINOUT_H */

