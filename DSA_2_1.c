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
    for(int a=0;a<(4);a++){
        for(int e=(1+a);e<5;e++){
            if(student[e].roll_no<student[a].roll_no){
                temp=student[e];
                student[e]=student[a];
                student[a]=temp;
            }
        }
    }
    printf("Sorted list of student is given below\n");
    for(int i=0;i<5;i++){
        printf("%s\t\t\t|%d\t|%f\n",student[i].name, student[i].roll_no, student[i].marks);
    }
    return 0;
}
