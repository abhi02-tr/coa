#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// string decimalToBinary(string s){
//     string b[20];
//     int n=0;
//     for(int i=0; i<strlen(s); i++){
//         n = n*10 + (s[i]-48);
//     }
//     return n;
// }

void two_comp(char *s){
    char b[20];
    char b2[20];
    int flag = 1;
    int sum = 0;
    
    for(int i=0; i<strlen(s); i++){
        b[i] = (s[i]=='1')?'0':'1';
    }
    printf("\nThe 1's comp:");
    // for(int i=0; i<strlen(b); i++){
        printf("%s\n", b);
    
    for(int i=strlen(b)-1; i>=0; i--){
        // if(flag==1){
        //     sum=(b[i]=='1')?0:1;
        // }
        // b2[i] = sum;
        
        if(b[i]=='1' && flag==1){
            b2[i]='0';
            
        }
        else if(b[i]=='0' && flag==1){
            b2[i] = '1';
            flag = 0;
        }
        else{
            b2[i] = b[i];
        }
    }
    printf("%s", b2);
    
}

int main()
{
    char s[10];
    int n;
    printf("Enter the binary no: ");
    gets(s);

     two_comp(s); 
    
    return 0;
}
