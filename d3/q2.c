#include <stdio.h>

int main(){
int m;
scanf("%d",&m);

if (m>=90 && m<=100){
printf("A grade");
}else if(m>=80 && m<90){
printf("B grade");
}else if(m>=70 && m<80){
printf("C grade");
}else if(m>=60 && m<70){
printf("D grade");
}else{
printf("failed");
}
return 0;
}
