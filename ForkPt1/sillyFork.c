#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>


int main(int argc, char ** argv){
    pid_t id;
    int status;
    while(--argc && (id=fork())){
        waitpid(id, &status, 0); // wait for child
    }

    printf("%d:%s\n", argc, argv[argc]);
    return 0;
}