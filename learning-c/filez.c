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

int linecount() {
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
    printf("%d\n", nl);
    return nl;
}

#define IN 1   //inside a word
#define OUT 0  //outside a word
int wordcount() {
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("lines:%d\nwords:%d\ncharacters:%d\n", nl, nw, nc);
    return nw;
}

