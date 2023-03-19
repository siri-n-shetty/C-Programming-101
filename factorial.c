// Factorial of a number

#include<stdio.h>
int main(){
    int i, n, prod;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    prod = 1;
    for(i=n; i>=1; i--){
        prod = prod*i;
    }

    printf("Factorial of %d is %d", n, prod);
    return 0;
}
