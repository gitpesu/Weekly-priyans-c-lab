#include <stdio.h>

int main(){
    int n;
    printf("No of elements to be entered --> \n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the element -->\t");
        scanf("%d",&arr[i]);
        printf("\n");
    }
    int newArray[n];
    int present = 0;
    int numbers = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (newArray[j]==arr[i]){
                present = 1;
            }
        }
        if (present != 1){
            newArray[i] = arr[i];
            numbers++;
        }
        present = 0;    
    }
    for (int i=0;i<numbers;i++){
        printf("%d\n",newArray[i]);
    }

    return 0;
}