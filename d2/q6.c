#include <stdio.h>

int main(){
int x;
scanf("%d",&x);
int l = x%10;
int f = x/100;
int m = x%100/10;
printf("%d%d%d",l,m,f);
return 0;
}
