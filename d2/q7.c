#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
int y = x/365;
int w = x%365/7;
int d = (x%365)%7;
printf("y = %d, w = %d, d = %d",y,w,d);
return 0;
}
