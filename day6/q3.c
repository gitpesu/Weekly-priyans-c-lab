#include <stdio.h>
#include <stdlib.h>

int find(int arr[],int size){
    int maxdiff = 0;
    int diff = 0;
    if (size<2){
        printf("invalid input");
        return 0;
    }else{
        for (int i =0 ; i < size-1;i++){
            diff = abs(arr[i]-arr[i+1]);
            if (diff > maxdiff){
                maxdiff = diff;
            }
        }
        printf("max diff btw adjacent elements = %d",maxdiff);
        return 0;
    }
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
    find(arr,size);
    return 0;
}