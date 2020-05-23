#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char ** argv){
    while( --argc > 1 && !fork());
    int val = atoi(argv[argc]);
    sleep(val);
    printf("%d\n", val);
    return 0;
}