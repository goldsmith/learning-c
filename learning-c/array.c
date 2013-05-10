//
//  array.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/8/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 100 //maximum input line length

/* print the longest line in an input */
void longest_line() {
    int len;                //curent line length
    int max;                //max length seen so far
    char line[MAXLINE];     //current input line
    char longest[MAXLINE];  //longest line saved
    
    void copy(char to[], char from[]);
    int get_line(char s[]);
    
    max = 0;
    while ((len = get_line(line)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) //there was at least one line
        printf("%s", longest);
}

/*read a line into input array and return its length */
int get_line(char s[]) {
    int c, i;
    
    for (i=0; i < MAXLINE && (c=getchar())!=EOF && c!='\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}

/* count the length of a long character array
    assumes sequential array beginning at 0 */
int length(char s[]) {
    int len;

    for (len=0; !(s[len] <= 0); len++); //go through array until a non-ascii value is found
    return len; //overcounts by 1
}

/* prints char array s */
void print_array(char s[], int len) {
    int i;
    for (i=0; i<len; i++)
        printf("%c", s[i]);
}

/* reverses a char array 'from' into 'to' */
void reverse(char from[], char to[], int length) {
    int i;    

    for (i=0; i<length; i++) 
        to[length-i-1] = from[i]; //place characters in 'to' backwards
    
    printf("\n"); //put on line after input
    for (i=0; i<length; i++)
        printf("%c", to[i]);
    
}

/* reverse an input char array up to 100 chars long */
void reverse_input() {
    int c;
    char s[100];
    printf("on the following lines type up to 100 chars to be reversed\n");
    
    int i = 0;
    while ((c=getchar()) != EOF && i < 100) {
        s[i] = c;
        i++;
    }
    
    int len = length(s);
    char to[100];
    
    reverse(s, to, len);
}

/* reverse input one line at a time */
void reverse_line_input() {
    char line[MAXLINE], reversed[MAXLINE];
    int len, i;
    printf("type up to 100 chars to be reversed one line at a time\n");
    while ((i=get_line(line) > 0)) { //go through input one line at a time
        len = length(line);
        reverse(line, reversed, len);
        printf("\n");
    }
}

/* strip trailing spaces and tabs from 'from' into 'to'
    assumes to is long enough */
void strip(char from[], char to[]) {
    int i, j, stop;
    
    int len = length(from);
    int end = len; //assume that there are no trailing spaces
    
    for (i=0; i < len; i++) {
        stop = 1;
        for (j=i; j<len; j++) { //look at the rest of the array
            if (from[j] != ' ' && from[j] != '\t') {
                stop = 0; //there are still remaining characters
                break;
            }
        }
        if (stop) {
            end = i; //last non-space character is at current i
            break;
        }
    }
    
    for (i=0; i < end; i++)
        to[i] = from[i];
}

/* strips trailing spaces and tabs of input */
void strip_input() {
    char c, input[MAXLINE], stripped[MAXLINE];
    int i;
    for (i=0; (c=getchar()) != EOF; i++) {
        input[i] = c;
    }
    
    strip(input, stripped);
    printf("\n");
    print_array(stripped, length(stripped));
}