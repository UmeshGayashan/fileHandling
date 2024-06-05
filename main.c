#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(void){

    int size;
    printf("Enter size of your Name: ");
    scanf("%d",&size);

    char name[size];
    printf("Enter your Name: ");
    scanf("%s",name);

    char age[2];
    printf("Enter your Age: ");
    scanf("%s",age);

    return 0;
}
