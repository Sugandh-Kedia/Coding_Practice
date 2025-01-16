#include<stdio.h>
struct detail{
    char name[50];
    int roll_no;
    float marks;
};
int main(){
    struct detail student[5];
    struct detail temp;
    printf("Enter the detail of the student's\n");
    for(int i=0;i<5;i++){
        printf("Enter the name of the student %d: ",i+1);
        scanf("%s",&student[i].name);
        printf("\n");
        printf("Enter the role no. of the student %d: ",i+1);
        scanf("%d",&student[i].roll_no);
        printf("\n");
        printf("Enter the total marks of the student %d: ",i+1);
        scanf("%f",&student[i].marks);
        printf("\n");
    }
    for(int a=1;a<(5);a++){
        int j;
        j=a-1;
        temp = student[a];
        while(j>=0 && student[j].roll_no > temp.roll_no){
            student[j+1]= student[j];
            j= j-1;
        }
        student[j+1]= temp;
    }
    printf("Sorted list of student is given below\n");
    for(int i=0;i<5;i++){
        printf("%s\t\t\t|%d\t|%f\n",student[i].name, student[i].roll_no, student[i].marks);
    }
    return 0;
}
