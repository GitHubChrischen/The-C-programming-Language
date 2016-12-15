#include<stdio.h>
/*
Exercise 1-9. Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.
*/
int main()
{
    char c;
    int first = 1;
    while((c = getchar()) != EOF){
        if(c == ' ' && first == 1){
            putchar(c);
            first = 0;
        }
        if(c != ' '){
            first = 1;
            putchar(c);
        }

    }

}

