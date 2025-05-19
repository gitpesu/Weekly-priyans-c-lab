#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = sumy(arr,5);
    printf("sum --> %d",sum);
    return 0;
}

int sumy(int arr[],int size){
    int sum = 0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}