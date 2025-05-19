#include <stdio.h>
#include <ctype.h>

void doit(char str[]){
    int con = 0;
    for (int i=0;i<sizeof(str);i++){
        int x=0;
        if (isalpha(str[i])){
            str[i]=tolower(str[i]);
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                printf("ASCII value of %c --> %d\n",str[i],str[i]);
                x = str[i]-'0';
                str[i] = x;
            }else{
                con++;
            }
        }
    }
    printf("final string --> %s",str);
    printf("count of consonants --> %d\n",con);
}

int main(){
    char str[100];
    printf("Enter the string \n");
    fgets(str,100,stdin);
    doit(str);
    printf("done\n");
    return 0;
}