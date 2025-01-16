#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no of row: ");
    scanf("%d", &a);
    printf("Enter the no of column: ");
    scanf("%d", &b);
    int matrix_1[a][b];
    printf("Enter the value of the elements of first matrix\n");
    for(int c = 0; c<a;c++){
        for(int d=0;d<b;d++){
            printf("Enter the value of element in %d row and %d column: ", c+1,d+1);
            scanf("%d", &matrix_1[c][d]);
            printf("\n");
        }
    }
    for(int c = 0; c<a;c++){
        for(int d=0;d<b;d++){
            printf("%d\t", matrix_1[c][d]);
        }
        printf("\n");
    }
    int matrix_2[a][b];
    printf("Enter the value of the elements of second matrix\n");
    for(int c = 0; c<a;c++){
        for(int d=0;d<b;d++){
            printf("Enter the value of element in %d row and %d column: ", c+1,d+1);
            scanf("%d", &matrix_2[c][d]);
            printf("\n");
        }
    }
    for(int c = 0; c<a;c++){
        for(int d=0;d<b;d++){
            printf("%d\t", matrix_2[c][d]);
        }
        printf("\n");
    }
    printf("Added matrix is\n");
    int matrix_3[a][b];
    for(int c = 0; c<a;c++){
        for(int d=0;d<b;d++){
            matrix_3[c][d]=matrix_1[c][d]+matrix_2[c][d];
            printf("%d\t", matrix_3[c][d]);
        }
        printf("\n");
    }
    return 0;
}