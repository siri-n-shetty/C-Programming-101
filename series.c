// WPC to print the sum of series 1 + x + x^2 + x^3 + x^4 ....

#include<stdio.h>
#include<math.h>

int main(){
    int n,x,sum,i;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sum = 0;
    i = 0;
    while(i<=n){
        sum  = sum + pow(x,i);
        i++;
    }

    printf("The sum of series: %d", sum);
    return 0;
}
