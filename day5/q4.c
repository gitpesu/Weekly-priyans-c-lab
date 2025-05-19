#include <stdio.h>

int main(){
    int m,n;
    printf("no of rows -->");
    scanf("%d",&m);
    printf("no of columns -->");
    scanf("%d",&n);
    int A[m][n];

    printf("enter for A -->\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("\t");
            scanf("%d",&A[i][j]);
        }
    }
    printf("\noutput -->\n");
    for (int i=0;i<m;i++){
        if (i%2==0){            
            for (int j=0;j<n;j++){
                printf("%d",A[i][j]);
            }
        }else{
            for (int j= n-1;j>=0;j--){
                printf("%d",A[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
    
}