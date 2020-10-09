//
//  main.c
//  F to C
//
//  Created by APPLE on 23/08/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("\nEnter temp in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit-32)*5/9;
    printf("\nTemperature in celsius : %f ", celsius);
    
    return (0);
}
