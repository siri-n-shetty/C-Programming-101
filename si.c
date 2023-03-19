// FINDING SIMPLE INTEREST

#include<stdio.h>
int main(){
    float p;
    float t;
    float r;
    float si;

    printf("Enter the principle amount: ");
    scanf("%f", &p);

    printf("Enter the time period: ");
    scanf("%f", &t);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    si = (p*t*r)/100;
    printf("The Simple Interest is: %.2f", si);;
}
