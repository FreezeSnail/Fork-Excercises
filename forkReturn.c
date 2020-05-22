#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main(){
    int var = fork();

    if( var == -1) exit(1); // failed fork
    if(var > 0) {
        //this is the parent
        //the child has id 'id'
        //waitpid will wait for a child to finish
        printf("parent branch: %d\n", var);
    } else {
        //the new child goes here
        printf("child branch: %d\n", var);
    }

    return 0;
}