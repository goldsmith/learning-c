//
//  array.c
//  learning-c
//
//  Created by Jonathan Goldsmith on 5/8/13.
//  Copyright (c) 2013 Jonathan Goldsmith. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000 //maximum input line length

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

/* copy 'from' into 'to'; assime to is big enough */
void copy(char to[], char from[]) {
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
