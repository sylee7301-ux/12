#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int ID;
    char name[10];
    double grade;
};

int main (void){
    struct student s1={0,"None",0};

    s1.ID=25;
    strcpy(s1.name,"Siyeon");
    s1.grade=4.3;

    printf("ID:%d\n",s1.ID);
    printf("name:%s\n",s1.name);
    printf("grade:%f\n",s1.grade);

    return 0;

}