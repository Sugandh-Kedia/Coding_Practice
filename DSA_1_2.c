#include<stdio.h>
int binary_search(int arr[],int x, int low, int high){ 
    int a=(high+low)/2;
    if(x==arr[a]){
        printf("The entered value is present at %d index.\n",a);
        return a;
    }
    else if(x>arr[a]){
        return binary_search(arr,x,(a+1),high);
    }
    else{
        return binary_search(arr,x,low,(a-1));
    }
}
int main(){
    int i;
    printf("Enter the no of elements: ");
    scanf("%d", &i);
    int arr[i-1];
    for(int a=0;a<i;a++){
        printf("Enter the no of '%d' element: ",a+1);
        scanf("%d", &arr[a]);
    }
    printf("[");
    for(int a=0;a<i;a++){ 
        printf("%d",arr[a]);
        if(a<(i-1)){
            printf(", ");
        }
    }
    printf("]\n");
    int temp;
    for(int a=0;a<(i-1);a++){
        for(int e=(1+a);e<i;e++){
            if(arr[e]<arr[a]){
                temp=arr[e];
                arr[e]=arr[a];
                arr[a]=temp;
            }
        }
    }
    printf("Sorted sequence is: ");
    printf("[");
    for(int a=0;a<i;a++){
        printf("%d",arr[a]);
        if(a<(i-1)){
            printf(", ");
        }
    }
    printf("]\n");
    int key;
    printf("Enter the value of which you want it's index: ");
    scanf("%d",&key);
    binary_search(arr,key,0,(i-1));
    return 0;
}