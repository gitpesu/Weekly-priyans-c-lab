#include <stdio.h>

int convert(int n) {
    int binary[32];
    int index = 0;
    int size =0;
    while (n>0){
        binary[index] = n%2;
        n = n/2;
        size++;
        index++;
    }
    

    printf("\nBinary no - ");
    for (int i = size;i>0;i--){
        printf("%d",binary[i-1]);
    }
    printf("\n");
    return 0;
}

int main(){
    int x;
    printf("Enter the no to be converted ");
    scanf("%d",&x);
    convert(x);
    return 0;
}