#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// int a[8];
// int b[8];

int *twoComp_rep(int n, int *a){
    // int a[8];
	int carry = 1;
	int msb=0;  //positive
	int temp;
	int size=0;
	
	if(n<-128 || n>127){
	    printf("The number is not valid\n");
	}
	else{
	if(n>=0){
		while(n!=0){
			a[size] = n%2;
			n=n/2;
			size++;
		}
		    for(int i=size; i<7; i++){
	        a[i] = 0;
	    }
	}
	else{
	    msb = 1;
	    n=sqrt(n*n);
	    while(n!=0){
	        a[size] = n%2;
	        n=n/2;
	        size++;
	    }
	    
	    //for(int i=0,j=size-1; i<size, j>=0; i++,j--){
	      //  b[i]=a[j];
	    //}
	    for(int i=size; i<7; i++){
	        a[i] = 0;
	    } 
	   
	    
	    //convert 1's comp
	    for(int i=0; i<7; i++){
	        a[i] = (a[i]==1) ? 0 : 1;
	    }
	    
	    //convert 2's comp
	    for(int i=0; i<7; i++){
	        if(a[i]==1 && carry==1){
	            a[i]=0;
	            carry=1;
	        }
	        else if(carry==1 && a[i]==0){
	            a[i] = 1;
	            carry=0;
	        }
	        
	    }
	}
	a[7]=msb;
// 	for(int j=7; j>=0; j--){
// 		printf("%d", a[j]);
// 	}
	}
	return a;
}

void addition(int n1, int n2){
    int a[8];
    int *b1;
    int *b2;
    
    b1 = twoComp_rep(n1,a);
    b2 = twoComp_rep(n2,a);
    
    
}

int main(){
	int n1, n2;
	int a[8];
	int *b1;
	int *b2
	printf("Enter the first number: ");
	scanf("%d", &n1);
	
// 	printf("Enter the second number: ");
// 	scanf("%d", &n2);
	b = twoComp_rep(n1, a);
	for(int i=7; i>=0; i--){
	    printf("%d", b[i]);
	}
	return 0;
}