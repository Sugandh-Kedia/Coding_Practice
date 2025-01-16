#include<stdio.h>
#include<math.h>
int main(){
    int amount;
    int principal;
    int rate;
    int number_of_intrest;
    int time;
    int a,b,c,d;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of intrest: ");
    scanf("%d", &rate);
    printf("Enter the period of time in years: ");
    scanf("%d", &time);
    printf("Enter the number of times intrest applied per time period: ");
    scanf("%d", &number_of_intrest);
    d=(rate/number_of_intrest);
    a=(1+d);
    b=(number_of_intrest*time);
    c=pow(a,b);
    amount=(principal*c);
    printf("Amount is %d", amount);
return 0;   
}