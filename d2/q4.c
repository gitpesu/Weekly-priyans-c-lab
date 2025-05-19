#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
int l = x%10;
int rem = x/10;
printf("%d %d",l,rem);
return 0;
}

