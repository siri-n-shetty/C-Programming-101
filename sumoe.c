// Sum of odd and even numbers in a single loop

#include<stdio.h>
int main(){
    int i, n, odd_sum, even_sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    odd_sum = 0;
    even_sum = 0;

    for(i=1; i<=n; i++){
        if(i % 2 == 1){
            odd_sum+=i;
        }
        else{
            even_sum+=i;
        }        
    }

    printf("\nSum of odd numbers: %d\n", odd_sum);
    printf("Sum of even numbers: %d\n", even_sum);
    return 0;
}
