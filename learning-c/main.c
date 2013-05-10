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
void reverse_input(), reverse(char from[], char to[], int length), reverse_line_input();
void copy(), longest_line(), print_array(char s[], int len);
void strip(char from[], char to[]), strip_input();
int get_line(), length(char s[]);

/* --------main--------- */
int main()
{
    strip_input();
    
    return 0;
}

