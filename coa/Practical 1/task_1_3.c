/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void hex_no(int n){
    char h[20];
    int i=0;
    int temp;
    while(n != 0){
        temp = n%16;
        n = n / 16;
        if(temp<10){
            h[i] = temp-48;
            i++;
            printf("%d", temp);
        }
        else{
            temp = temp%10;
            h[i] = temp + 65;
            i++;
        }
    }
    
    for(int j = i-1; j>=0; j--){
        printf("%c", h[j]);
    }
}

int main()
{
    int n;
    printf("Enter Decimal number: ");
    scanf("%d", &n);
    hex_no(n);
    return 0;
}
