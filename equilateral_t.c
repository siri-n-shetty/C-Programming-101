// Finding area of an equilateral triangle

#include<stdio.h>
#include<math.h>

int main(){
    float x, area;

    printf("Enter the length of the side of the triangle: ");
    scanf("%f", &x);

    area = (sqrt(3)/4)*(x*x);
    printf("The area of the equilateral triangle is: %.2f", area);
    return 0;
}
