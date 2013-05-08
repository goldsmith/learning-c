//
//  filez.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/7/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>

double charcount() {
    double nc; //num characters
    int end;
    
    //empty for loop to increment nc
    for (nc =0; getchar() != EOF; nc++);
    
    //last character
    end = getchar();
    
    printf("EOF: %d\n", end);
    printf("num characters: %f\n", nc);
    
    return nc;
}


