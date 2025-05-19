#include <stdio.h>

int main(){
    int s;
    printf("enter the no ");
    scanf("%d",&s);
    int ans = 1;
    while (s > 0) {
        ans = ans*s;
        s--;
    }
    printf("ans --> %d\n",ans);
    return 0;

}