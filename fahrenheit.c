//
//  fahrenheit.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/7/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for floats 0, 20, ..., 300*/

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahrenheitTable() {
    float fahr, celsius;
    
    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}

/*converts a temperature from celsius to fahrenheit */
float fahrenheit(float celsius) {
    float res;
    res = (9.0/5.0) * celsius + 32.0;
    printf("%f\n", res);
    return res;
}

/* converts a temperature from fahrenheit to celsius */
float celsius(float fahr) {
    float res;
    res = (5.0/9.0) * (fahr - 32.0);
    printf("%f\n", res);
    return res;
}