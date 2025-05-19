#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int x = 0;
    printf("Enter the string --> \n");
    fgets(str,sizeof(str),stdin);
    for (int i = 0; i<sizeof(str);i++){
        if (isdigit(str[i])){
            x = str[i] - '0';
            printf("cube of %c --> %d\n",str[i],x*x*x );
        }
    }
    return 0;
}