#include <stdio.h>

int main(){
    int n;
    printf("no of elements to be entered -->\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the elemnt -->");
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]!=-1){
            for (int j=0;j<n;j++){
                if (arr[i]==arr[j]){
                    count++;
                    
                }
                
            }
            printf("no of similar elemnts of %d --> %d\n",arr[i],count);
            count=0;
            
        }

    }
    return 0;

}