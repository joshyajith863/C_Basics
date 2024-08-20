//Code to perform the quadratic equation
#include <stdio.h>
#include <math.h>
float quadratic(int a,int b,int c){
float discriminant = (b * b) - (4 * a * c);
if (discriminant > 0){
    float root1,root2;
    root1 = - b + sqrt(discriminant)/2*a;
    root2 = - b - sqrt(discriminant)/2*a;
    printf("The roots are :%.2f,%.2f",root1,root2);
}else if(discriminant == 0){
    printf("The roots are :%.2f",(-b)/2*a);
}
else{
    float realpart = (-b)/2*a;
    float imaginarypart = fabs(discriminant)/2*a;
    printf("The roots are complex..:\n");
    printf("root1 = %.2f + %.2fi\n",realpart,imaginarypart);
    printf("root2 =  %.2f - %.2fi\n",realpart,imaginarypart);
}}
int main(){
    int a,b,c;
    printf("Enter the coefficients of the quadratic equation..");
    scanf("%d%d%d",&a,&b,&c);
    if(a == 0){
        if(b == 0){
            printf("Not a quadratic equation..");

        }
        else{
            printf("The root is :",(-c)/b);
        }
    }else{
        quadratic(a,b,c);
    }
    return 0;

}
