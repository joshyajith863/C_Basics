#include <stdio.h>
float oprtion(int n,int n2,char op){
    switch (op){
        case '+' :
            return n + n2;
            break;
        case '-' :
            return n - n2;
            break;
        case '*' :
            return n * n2;
            break;
        case '/' :
            if(n2 != 0){
                return (float)n/n2;
                break;
            }
            else{
                printf("Error: division is impossible by zero");
                return 0;
            }
        default:
            printf("Error : Invalid Operation");
            return 0;
    }
}
int main(){
    int num1,num2;
    char operation;
    printf("Enter the operation in the given format \n");
    printf("operand operator operand \n For Eg: 2 + 5\n ");
    scanf("%d %c %d",&num1,&operation,&num2);
    printf("%d %c %d = %f",num1,operation,num2,oprtion(num1,num2,operation));
    return 0;
}
