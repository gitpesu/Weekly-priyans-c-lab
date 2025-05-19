#include <stdio.h>
int main(){
int x1,x2;
scanf("%d",&x1);
scanf("%d",&x2);
x1 = x1^x2;
x2 = x1^x2;
x1 = x1^x2;
printf("1st = %d , 2nd = %d",x1,x2);
return 0;
}
