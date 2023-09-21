/* 
 * File:   application.c
 * Author: Khaled_Farrag
 *
 * Created on September 19, 2023, 1:55 PM
 */

#include "application.h"

//#define HWREG8(_x)   (*((volatile unsigned char *)(_x)))

pin_config_t led_1 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN0  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_2 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN1  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


pin_config_t led_3 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN2  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_4 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN3  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_5 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN4  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


pin_config_t led_6 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN5  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_7 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN6  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_8 = {
    .port = PORTD_INDEX,
    .pin  = GPIO_PIN7  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


pin_config_t led_9 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN0  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_10 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN1  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_11 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN2  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


pin_config_t led_12 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN3  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_13 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN4  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_14 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN5  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};


pin_config_t led_15 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN6  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};

pin_config_t led_16 = {
    .port = PORTB_INDEX,
    .pin  = GPIO_PIN7  ,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = GPIO_LOW
};



Std_ReturnType ret = E_NOT_OK ;
 
int main() {
    
    application_intialize();
      
               while(1)
    {
                   gpio_pin_write_logic(&led_8,GPIO_LOW);
                   gpio_pin_write_logic(&led_16,GPIO_LOW);
                   gpio_pin_write_logic(&led_1,GPIO_HIGH);
                   gpio_pin_write_logic(&led_9,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_1,GPIO_LOW);
                   gpio_pin_write_logic(&led_9,GPIO_LOW);
                   gpio_pin_write_logic(&led_2,GPIO_HIGH);
                   gpio_pin_write_logic(&led_10,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_2,GPIO_LOW);
                   gpio_pin_write_logic(&led_10,GPIO_LOW);
                   gpio_pin_write_logic(&led_3,GPIO_HIGH);
                   gpio_pin_write_logic(&led_11,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_3,GPIO_LOW);
                   gpio_pin_write_logic(&led_11,GPIO_LOW);
                   gpio_pin_write_logic(&led_4,GPIO_HIGH);
                   gpio_pin_write_logic(&led_12,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_4,GPIO_LOW);
                   gpio_pin_write_logic(&led_12,GPIO_LOW);
                   gpio_pin_write_logic(&led_5,GPIO_HIGH);
                   gpio_pin_write_logic(&led_13,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_5,GPIO_LOW);
                   gpio_pin_write_logic(&led_13,GPIO_LOW);
                   gpio_pin_write_logic(&led_6,GPIO_HIGH);
                   gpio_pin_write_logic(&led_14,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_6,GPIO_LOW);
                   gpio_pin_write_logic(&led_14,GPIO_LOW);
                   gpio_pin_write_logic(&led_7,GPIO_HIGH);
                   gpio_pin_write_logic(&led_15,GPIO_HIGH);
                   __delay_ms(500);
                   gpio_pin_write_logic(&led_7,GPIO_LOW);
                   gpio_pin_write_logic(&led_15,GPIO_LOW);
                   gpio_pin_write_logic(&led_8,GPIO_HIGH);
                   gpio_pin_write_logic(&led_16,GPIO_HIGH);
                   __delay_ms(500);
                   
                   
                   ///////////////////////////////////////
                   
                   gpio_pin_write_logic(&led_8,GPIO_LOW);
                   gpio_pin_write_logic(&led_16,GPIO_LOW);
                   gpio_pin_write_logic(&led_1,GPIO_HIGH);
                   gpio_pin_write_logic(&led_9,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_1,GPIO_LOW);
                   gpio_pin_write_logic(&led_9,GPIO_LOW);
                   gpio_pin_write_logic(&led_2,GPIO_HIGH);
                   gpio_pin_write_logic(&led_10,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_2,GPIO_LOW);
                   gpio_pin_write_logic(&led_10,GPIO_LOW);
                   gpio_pin_write_logic(&led_3,GPIO_HIGH);
                   gpio_pin_write_logic(&led_11,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_3,GPIO_LOW);
                   gpio_pin_write_logic(&led_11,GPIO_LOW);
                   gpio_pin_write_logic(&led_4,GPIO_HIGH);
                   gpio_pin_write_logic(&led_12,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_4,GPIO_LOW);
                   gpio_pin_write_logic(&led_12,GPIO_LOW);
                   gpio_pin_write_logic(&led_5,GPIO_HIGH);
                   gpio_pin_write_logic(&led_13,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_5,GPIO_LOW);
                   gpio_pin_write_logic(&led_13,GPIO_LOW);
                   gpio_pin_write_logic(&led_6,GPIO_HIGH);
                   gpio_pin_write_logic(&led_14,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_6,GPIO_LOW);
                   gpio_pin_write_logic(&led_14,GPIO_LOW);
                   gpio_pin_write_logic(&led_7,GPIO_HIGH);
                   gpio_pin_write_logic(&led_15,GPIO_HIGH);
                   __delay_ms(200);
                   gpio_pin_write_logic(&led_7,GPIO_LOW);
                   gpio_pin_write_logic(&led_15,GPIO_LOW);
                   gpio_pin_write_logic(&led_8,GPIO_HIGH);
                   gpio_pin_write_logic(&led_16,GPIO_HIGH);
                   __delay_ms(200);
                   
                   ///////////////////////////////////////
                   
                   gpio_pin_write_logic(&led_8,GPIO_LOW);
                   gpio_pin_write_logic(&led_16,GPIO_LOW);
                   gpio_pin_write_logic(&led_1,GPIO_HIGH);
                   gpio_pin_write_logic(&led_9,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_1,GPIO_LOW);
                   gpio_pin_write_logic(&led_9,GPIO_LOW);
                   gpio_pin_write_logic(&led_2,GPIO_HIGH);
                   gpio_pin_write_logic(&led_10,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_2,GPIO_LOW);
                   gpio_pin_write_logic(&led_10,GPIO_LOW);
                   gpio_pin_write_logic(&led_3,GPIO_HIGH);
                   gpio_pin_write_logic(&led_11,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_3,GPIO_LOW);
                   gpio_pin_write_logic(&led_11,GPIO_LOW);
                   gpio_pin_write_logic(&led_4,GPIO_HIGH);
                   gpio_pin_write_logic(&led_12,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_4,GPIO_LOW);
                   gpio_pin_write_logic(&led_12,GPIO_LOW);
                   gpio_pin_write_logic(&led_5,GPIO_HIGH);
                   gpio_pin_write_logic(&led_13,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_5,GPIO_LOW);
                   gpio_pin_write_logic(&led_13,GPIO_LOW);
                   gpio_pin_write_logic(&led_6,GPIO_HIGH);
                   gpio_pin_write_logic(&led_14,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_6,GPIO_LOW);
                   gpio_pin_write_logic(&led_14,GPIO_LOW);
                   gpio_pin_write_logic(&led_7,GPIO_HIGH);
                   gpio_pin_write_logic(&led_15,GPIO_HIGH);
                   __delay_ms(100);
                   gpio_pin_write_logic(&led_7,GPIO_LOW);
                   gpio_pin_write_logic(&led_15,GPIO_LOW);
                   gpio_pin_write_logic(&led_8,GPIO_HIGH);
                   gpio_pin_write_logic(&led_16,GPIO_HIGH);
                   __delay_ms(100);
    }
     
    return (EXIT_SUCCESS);
}







void application_intialize(void){
     ret = gpio_pin_intialize(&led_1);
     ret = gpio_pin_intialize(&led_2);
     ret = gpio_pin_intialize(&led_3);
     ret = gpio_pin_intialize(&led_4);
     ret = gpio_pin_intialize(&led_5);
     ret = gpio_pin_intialize(&led_6);
     ret = gpio_pin_intialize(&led_7);
     ret = gpio_pin_intialize(&led_8);
     
     ret = gpio_pin_intialize(&led_9);
     ret = gpio_pin_intialize(&led_10);
     ret = gpio_pin_intialize(&led_11);
     ret = gpio_pin_intialize(&led_12);
     ret = gpio_pin_intialize(&led_13);
     ret = gpio_pin_intialize(&led_14);
     ret = gpio_pin_intialize(&led_15);
     ret = gpio_pin_intialize(&led_16);
}