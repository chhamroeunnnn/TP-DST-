#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
void selectionshot(int arr[], int n){
    int i,j,minIndex;
    for (i=0 ; i<n-1; i++){
        minIndex=i;
        for (j=1+i; j<n; j++){
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }  
        }
        swap (&arr[minIndex], &arr[i]);
    }

}
void exchange(int *a; int *b)
