#include <stdio.h>
#include <ctype.h>

void doit(char str[]){
    int vowel=0,con=0;
    for (int i=0;i<sizeof(str);i++){
        if (isalpha(str[i])){
            str[i]=tolower(str[i]);
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                vowel++;
            }else{
                con++;
            }
        }
    }
    printf("count of vowels --> %d\n",vowel);
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