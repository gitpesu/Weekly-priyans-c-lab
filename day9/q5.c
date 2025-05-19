#include <stdio.h>

struct Attendance
{
    char name[50];
    float attendance;
};

void read(struct Attendance *p){
    printf("Enter the details -  name \n");
    scanf("%[^\n]s",p->name);
    printf("Enter the details - projects \n");
    scanf("%f",&p->attendance);
    printf("Details Entered Successfully\n");
}

void calc(struct Attendance p){
    int base = p.attendance;
    if (base>75){
        printf("EXCELLENT --> %f",base);
    }else {
        printf(" Not good --> %f",base);
    }
}

int main(){
    struct Attendance Po;
    read(&Po);
    calc(Po);
    return 0;
}