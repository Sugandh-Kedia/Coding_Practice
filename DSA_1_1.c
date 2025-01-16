#include<stdio.h>
int main(){
    int key, i;
    printf("Enter the no. of elements: ");
    scanf("%d",&i);
    int arr[i];
    for(int a=0;a<i;a++){
        printf("Enter the %d element: ",a+1);
        scanf("%d",&arr[a]);
    };
    printf("[");
    for(int a=0;a<i;a++){
        printf("%d",arr[a]);
        if(a<i-1){
            printf("\t");
        }
    };
    printf("]\n");
    printf("Enter the value of which you want it's index: ");
    scanf("%d",&key);
    for(int a=0;a<i;a++){
        if(key==arr[a]){
            printf("The value you have entered has the index %d",a);
            break;
        }
        else{
            if(a==i-1){
                printf("The value you have entered is not present");
            }
        }
    }
    return 0;
}