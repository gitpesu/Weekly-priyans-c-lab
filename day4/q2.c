#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
for (int i = 2;i<=n;i++){
int divisor =0;
for (int j=2;j<=i;j++){
if (i%j==0){
divisor++;
}
}
if (divisor==1){
printf("prime no - %d \n",i);
}
}
return 0;
}
