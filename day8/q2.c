#include <stdio.h>
#include <ctype.h>

void doit(char str[]){
    for (int i =0 ; i<sizeof(str);i++){
        int count = 1;
        if (str[i] != "\n" && isalpha(str[i])){
            for (int j=i+1;j<sizeof(str);j++){
                if (str[i] == str[j]){
                    count++;
                    str[j] = '\n';
                }
            }
            printf("count of %c in string is --> %d\n",str[i],count);
            str[i]='\n';
        }
        
    }
}

int main(){
    printf("Enter the string --> \n");
    char str[100];
    fgets(str,100,stdin);
    doit(str);
    printf("done\n");
    return 0;
}