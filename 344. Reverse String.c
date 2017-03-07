//https://leetcode.com/problems/reverse-string/?tab=Description

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
    int len= strlen(s)-1;
    int i = 0;
    char temp;
    while(i<len)
    {
        temp = s[len];
        s[len]=s[i];
        s[i]=temp;
        i++;
        len--;
    }
    return s;
    
}
