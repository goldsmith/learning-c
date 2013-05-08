//
//  main.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/7/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>

int main()
{
    void fahrenheitTable();
    float fahrenheit(float celsius), celsius(float fahr);
    
    fahrenheitTable();
    fahrenheit(-40.0);
    celsius(212.0);
    
    return 0;
}

