// Fact while loop
#include <stdio.h>
int fact(int n){
    int fct = 1;
    for(int i = 1;i <= n;i++ ){
        fct = fct * i;
    }
    return fct;
}
int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 printf(" The factorial of the %d is %d",n,fact(n));
}
