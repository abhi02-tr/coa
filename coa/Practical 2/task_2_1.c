/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// void comp_1()

void decimalToBinary(int n){
    int temp=0;
    int i=0;
    int a[10];
    int ans;
    while(n!=0){
        a[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d", a[j]);
        ans = (a[j]==1 ? 0 : 1); 
        ans = ans + ans*10;
        // temp = temp*10 + a[j];
    }
    // printf("%d\n", temp);
    printf("\n%d\n", ans);
    
    
}

int main()
{
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}
