//factorial using while
#include <stdio.h>
int fact(int n){
    int fct = 1,i=1;
    while(i<=n){
        fct = fct * i;
        i++;
    }
    return fct;
}
int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 printf(" The factorial of the %d is %d",n,fact(n));
}

