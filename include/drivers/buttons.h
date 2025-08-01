#ifndef BUTTONS_H
#define BUTTONS_H

#include <stdint.h>

typedef enum {
    BUTTON_NONE,
    BUTTON_OK,
    BUTTON_BACK,
    BUTTON_NEXT,
    BUTTON_PREV
} button_t;

void buttons_init(void);

button_t buttons_poll(void);

uint8_t button_pressed(button_t b);

#endif
