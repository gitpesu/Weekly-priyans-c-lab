#include <stdio.h>

int main(){
int x,y,z;
int type ;
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
if ( ( x+y<=z) || (x+z<=y) || (y+z<=x)){
printf("triangle doesnt exist");
}else{
if ((x==y) & (y==z)){
type = 1;
}else if(x==y || y==z || z==x){
type = 2;
}


switch (type){
case 1: 
printf("equilateral triangle");
break;
case 2:
printf("isosceles triangle");
break;
default:
printf("scalene triangle");
break;
}
}
return 0;
} 

