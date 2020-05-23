#include <stdio.h>
#include <unistd.h> 

int main(){
    printf("hellow fork\n");

    fork();
    //2 processes running now

    printf("ive been forked\n");

    return 0;
}