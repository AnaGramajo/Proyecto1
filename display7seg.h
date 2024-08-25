#ifndef __DISPLAY7SEG_H__
#define __DISPLAY7SEG_H__

#include <Arduino.h>

extern uint8_t pinA, pinB, pinC, pinD, pinE, pinF, pinG, pinP;

// Función oara configurar el display
void configurarDisplay(uint8_t segA, uint8_t segB, uint8_t segC, uint8_t segD, uint8_t segE, uint8_t segF, uint8_t segG, uint8_t segP);
// Función para desplegar un numero en el display
void desplegarDisplay(uint8_t numero);
// Función para desplejar el punto en el display
void desplegarPunto(uint8_t punto);

#endif // __DISPLAY7SEG_H__