#include <stdio.h>

struct Hotel
{
    char guest[10];
    int room;
    int nights;
    float rate;
};

void read(struct Hotel *p){
    printf("Enter the details - guest name \n");
    scanf("%[^\n]s",p->guest);
    printf("Enter the details - room no \n");
    scanf("%d",&p->room);
    printf("Enter the details - nights \n");
    scanf("%d",&p->nights);
    printf("Enter the details - rate per night\n");
    scanf("%d",&p->rate);
    printf("Details Entered Successfully\n");
}

void calc(struct Hotel p){
    int charge = 200 + p.nights*p.rate;
    if (p.nights>=5){
        charge *= 0.85;
    }
    printf("Total --> %d\n", charge);
}

int main(){
    struct Hotel Po;
    read(&Po);
    calc(Po);
    return 0;
}