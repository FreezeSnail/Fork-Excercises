#include <stdio.h>
#include <unistd.h> 

int main(){
    int var = 84 >> 1;
    printf("%d\n", var);
    fork(); //inst printing twice???
    return 0;
}