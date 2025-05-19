#include <stdio.h>

struct Parcel
{
    char sender[50];
    char receiver[50];
    float weight;
    float distance;
};

void read(struct Parcel *p){
    printf("Enter the details - sender name \n");
    scanf("%[^\n]s",p->sender);
    printf("Enter the details - receiver name \n");
    scanf("%s",p->receiver);
    printf("Enter the details - weight in kg \n");
    scanf("%f",&p->weight);
    printf("Enter the details - distance in km\n");
    scanf("%f",&p->distance);
    printf("Details Entered Successfully\n");
}

void calc(struct Parcel *p){
    int base = 5*p->distance*p->weight;
    int tax = base*0.12;
    int total = base + tax;
    printf("base charge --> %d\n",base);
    printf("Tax --> %d\n",tax);
    printf("Total --> %d\n", total);
}

int main(){
    struct Parcel Po;
    read(&Po);
    calc(&Po);
    return 0;
}