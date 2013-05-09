//
//  main.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/7/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>

/* -------all of the functions-------- */
//fahrenheit.c
void fahrenheitTable();
float fahrenheit(float celsius), celsius(float fahr);

//filez.c
double charcount();
int linecount(), wordcount();

//array.c
void reverse_input(), reverse(char from[], char to[], int length), copy(), longest_line();
int get_line(), length(char s[]);


/* --------main--------- */
int main()
{
    reverse_input();
    
    return 0;
}

