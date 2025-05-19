#include <stdio.h>

int main(){
    int m,n;
    printf("no of rows -->");
    scanf("%d",&m);
    printf("no of columns -->");
    scanf("%d",&n);
    int A[m][n],B[m][n],C[m][n];

    printf("enter for A -->\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("\t");
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("\n");
    printf("enter for B -->\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("\t");
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("sum -->\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}