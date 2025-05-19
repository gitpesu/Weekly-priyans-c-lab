#include <stdio.h>

int sumarray(int *arr, int size){
    int sum = 0;
    for (int i = 0;i<size;i++){
        sum += *arr;
        arr ++;
    }
    printf("Sum = %d",sum);
    return 0;
}

int main(){
    int size;
    printf("enter size of array");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0;i<size;i++){
        printf("enter the element ");
        scanf("%d",&arr[i]);
    }
    int *ptr = &arr[0];
    sumarray(ptr,size);
    return 0;
}