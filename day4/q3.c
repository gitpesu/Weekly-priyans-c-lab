#include <stdio.h>

int main(){
int n;
int s=1;
scanf("%d",&n);
for (int i=1;i<=n;i++){
for (int j=1;j<=i;j++){
printf("%d",s++);
}
printf("\n");
}
return 0;
}
