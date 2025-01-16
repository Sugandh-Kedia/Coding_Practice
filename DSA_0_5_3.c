#include<stdio.h>
int main(){
int side;
float area;
printf("Enter the length of side of square: ");
scanf("%d", &side);
area=(side*side);
printf("Area of square is: %f", area);
return 0;
}