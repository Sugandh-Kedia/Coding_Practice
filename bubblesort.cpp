#include<iostream>
using namespace std;

template <typename T>
void bsort(T array[], int size){                        //bubble sort function
    for(int i=0;i< size-1;i++){
        for(int j=0; j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}
template <typename T>
void print(T array [], int size){                        //print functon
    for(int i=0;i< size;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    char A[] = {'a','g','w','f','q','b'};               //declearing unarranged alphabets
    int B[]={9,7,5,73,76,13,67,34};                     //declearing unarranged integers
    float C[]={98.01,96.01,25.25,23.98,11.25,11.11};    //declearing unarranged floats
    int size1 = sizeof(A)/sizeof(A[0]);                 //no. of alphabets 
    int size2 = sizeof(B)/sizeof(B[0]);                 //no. of integers
    int size3 = sizeof(C)/sizeof(C[0]);                 //no. of floats
    cout<<"Sorted form of alphabets are: ";
    bsort(A,size1);                                     //sorting and printing alphabets
    print(A,size1);
    cout<<endl;
    cout<<"Sorted form of integer are: ";
    bsort(B,size2);                                     //sorting and printing integers
    print(B,size2);
    cout<<endl;
    cout<<"Sorted form of float are: ";
    bsort(C,size3);                                     //sorting and printing floats
    print(C,size3);
    return 0;
}