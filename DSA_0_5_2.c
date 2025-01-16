#include<stdio.h>
int main(){
int length, breadth;
float area;
printf("Enter the length of rectangle: ");
scanf("%d", &length);
printf("Enter the breadth of rectangle: ");
scanf("%d", &breadth);
area=(length*breadth);
printf("Area of rectangle is: %f", area);
return 0;
}