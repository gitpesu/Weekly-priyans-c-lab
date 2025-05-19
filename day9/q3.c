#include <stdio.h>

struct Freelance
{
    char name[50];
    int projects;
    float rate;
};

void read(struct Freelance *p){
    printf("Enter the details -  name \n");
    scanf("%[^\n]s",p->name);
    printf("Enter the details - projects \n");
    scanf("%d",&p->projects);
    printf("Enter the details - rate \n");
    scanf("%f",&p->rate);
    printf("Details Entered Successfully\n");
}

void calc(struct Freelance p){
    int base = p.projects*p.rate;
    if (p.projects>5){
        base *= 1.10;
    }
    printf("Total  --> %d\n",base);
}

int main(){
    struct Freelance Po;
    read(&Po);
    calc(Po);
    return 0;
}