#include <stdio.h>

struct Vehicle
{
    char reg[50];
    char owner[50];
    float distance;
    float fuel;
};

void read(struct Vehicle *p){
    printf("Enter the details -  registered number \n");
    scanf("%[^\n]s",p->reg);
    printf("Enter the details - owners name \n");
    scanf("%s",p->owner);
    printf("Enter the details - distance \n");
    scanf("%f",&p->distance);
    printf("Enter the details - fuel\n");
    scanf("%f",&p->fuel);
    printf("Details Entered Successfully\n");
}

void calc(struct Vehicle p){
    float base = p.distance/p.fuel;
    if (base>20){
        printf("EXCELLENT --> %f" , base);
    }else if (base>15 && base<20){
        printf("GOOD --> %f",base);
    }else if (base <15){
        printf("POOR --> %f",base);
    }
}

int main(){
    struct Vehicle Po;
    read(&Po);
    calc(Po);
    return 0;
}