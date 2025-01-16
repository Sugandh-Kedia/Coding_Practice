#include<stdio.h>
int main(){
int height, base;
float area;
printf("Enter the base of triangle: ");
scanf("%d", &base);
printf("Enter the height of triangle: ");
scanf("%d", &height);
area=(0.5*base*height);
printf("Area of triangle is: %f", area);
return 0;
}