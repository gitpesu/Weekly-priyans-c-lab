#include <stdio.h>

int countevenodd(int arr[],int size,int *evencount,int *oddcount){
    for (int i = 0 ; i<size ; i++){
        if (arr[i]%2 == 0){
            (*evencount)++;
        }else{
            (*oddcount)++;
        }
    }
    printf("even count = %d \n",*evencount);
    printf("odd count = %d \n",*oddcount);
    return 0;
}

int main(){
    int size;
    printf("enter size of array - ");
    scanf("%d",&size);
    int arr[size];
    for (int i =0;i<size;i++){
        printf("enter element - ");
        scanf("%d",&arr[i]);
    }
    int evencount = 0;
    int oddcount = 0;
    int *eptr = &evencount;
    int *optr = &oddcount;
    countevenodd(arr,size,eptr,optr);
    return 0;
}