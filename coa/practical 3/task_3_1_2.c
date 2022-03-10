/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void left_shift(char *b){
    char temp = b[strlen(b)-1];
    char b1[20];
    
    for(int i=0; i<strlen(b)-1; i++){
        b1[i+1] = b[i];
    }
    b1[0] = temp;
    printf("The string is %s", b1);
}

void right_shift(char *b){
    char temp = b[0];
    char b1[20];
    
    for(int i=strlen(b)-1; i>0; i--){
        b1[i-1] = b[i];
    }
    b1[strlen(b)-1] = temp;
    printf("The string is %s", b1);
}

int main()
{
    char b[20];
    printf("Enter the binary number:");
    gets(b);

    // left_shift(b);
    right_shift(b);

    return 0;
}
