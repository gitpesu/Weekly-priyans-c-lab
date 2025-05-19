#include<stdio.h>

int main(){
int x1,x2;
printf("enter 1st");
scanf("%d",&x1);
printf("enter 2nd");
scanf("%d",&x2);

int temp = x1;
x1 = x2;
x2 = temp;
printf("1st = %d , 2nd = %d",x1,x2);
return 0;
}

