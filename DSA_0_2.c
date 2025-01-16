#include<stdio.h>
struct Student{
    char First_Name[100];
    char Last_Name[100];
    int Roll_No;
    long int PRN;   
};
int main(){
    struct Student s[100];
    printf("Enter the number of the student of which you want to enter detail:- ");
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("Enter the first name of student- ");
        scanf("%s",s[i].First_Name);
        printf("Enter last name of student- ");
        scanf("%s",s[i].Last_Name);
        printf("Enter roll no of student- ");
        scanf("%d",&s[i].Roll_No);
        printf("Enter prn of student- ");
        scanf("%ld",&s[i].PRN);
    }
    printf("\nPRN \t\tRoll No \t First Name \t Last Name\n");
    for(int i=0;i<a;i++){
        printf("%ld\t",s[i].PRN);
        printf("%d\t\t ",s[i].Roll_No);
        printf("%s\t ",s[i].First_Name);
        printf("%s\t\n",s[i].Last_Name);
    }
    return 0;
}
