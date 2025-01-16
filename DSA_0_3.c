#include<stdio.h>
int main(){
int a;
printf("Enter the number, which you want to find it is odd or even: ");
scanf("%d", &a);
if (a%2==0){
    printf("The enter number is even");
}
else{
    printf("The enter number is odd");
}
return 0;
}