#include <stdio.h>

int main(){
int pass ;
scanf("%d",&pass);
int f = pass/1000;
int l = pass%10;
int s = (pass/100)%10;
int t = (pass/10)%10;
int sum = f+l+s+t;
int check = 0;
printf("%d , %d , %d , %d\n ",f,s,t,l);
if (sizeof(pass) == 4){
check++;
}else{
printf("not 4 digit \n");
}
if (sum%2==0){
check++;
}else{
printf("sum is not even \n");
}
if (f == l){
check++;
}else{
printf("f and l are not equal \n");
}

if (check == 3){
printf("its correct\n");
}else{
printf("hence not correct\n\n");
}


return 0;
}
