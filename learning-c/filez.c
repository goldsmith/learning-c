//
//  filez.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/7/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>

long charcount() {
    long nc;
    int end;
    
    nc = 0;
    while (getchar() != EOF)
        nc++;
    end = getchar();
    printf("EOF: %d\n", end);
    printf("num characters: %ld\n", nc);
    
    return nc;
}