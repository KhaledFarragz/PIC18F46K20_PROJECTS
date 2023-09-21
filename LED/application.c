/* 
 * File:   application.c
 * Author: Khaled_Farrag
 *
 * Created on September 19, 2023, 1:55 PM
 */

#include "application.h"

//#define HWREG8(_x)   (*((volatile unsigned char *)(_x)))

Std_ReturnType ret = E_NOT_OK ;
 

led_t led1 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN0, .led_status = GPIO_LOW};
led_t led2 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN1, .led_status = GPIO_LOW};
led_t led3 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN2, .led_status = GPIO_LOW};
led_t led4 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN3, .led_status = GPIO_LOW};


int main() {
    
    application_intialize();
      
               while(1)
    {
              application_intialize();
               led_turn_on(&led1);
               __delay_ms(500);
               led_turn_off(&led1);
               led_turn_on(&led2);
               __delay_ms(500);
               led_turn_off(&led2);
               led_turn_on(&led3);
               __delay_ms(500);
               led_turn_off(&led3);
               led_turn_on(&led4);
                __delay_ms(500);
                led_turn_on(&led1);
                led_turn_on(&led2);
                led_turn_on(&led3);
                led_turn_on(&led4);
                __delay_ms(500);
                led_turn_toggle(&led2);
                led_turn_toggle(&led4);
                __delay_ms(500);
                led_turn_toggle(&led1);
                led_turn_toggle(&led2);
                led_turn_toggle(&led3);
                led_turn_toggle(&led4);
                __delay_ms(5000);
                
    }
       
                   
     
    return (EXIT_SUCCESS);
}


void application_intialize(void){
    ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    ret = led_initialize(&led3);
    ret = led_initialize(&led4);
    
}