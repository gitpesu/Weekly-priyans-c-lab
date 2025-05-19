#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
printf("%d%d%d",(x/100)*2,(x%100/10),(x%10)*0.5);
return 0;
}
