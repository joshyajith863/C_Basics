#include <stdio.h>
int main(){
    int n, i,m,flag;
    printf("Enter the number of elements..:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the search element  :");
    scanf("%d",&m);
    printf("Enter the array..:");
    for(i =0;i < n;i++){
        scanf("%d",a[i]);
    }
    printf("The given array is :");
    for(i = 0;i < n;i++){
        printf("%d, ",a[i]);
    }
    for(i =0 ;i < n;i++){
        if(a[i] == m){
            flag = 1;
            break;
        }

    }
    if (flag == 1){
        printf("The element is found at the %dth position of the array :",i+1);
    }
    else{
        printf("Element not found...!");
    }
    return 0;
}
