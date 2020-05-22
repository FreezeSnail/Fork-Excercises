#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/wait.h>

int main(){
    pid_t child_id = fork();

    if( child_id == -1) { 
        perror("fork");
        exit(EXIT_FAILURE); // failed fork
    }
    if(child_id > 0) {
        //this is the parent
        int status;
        
        waitpid(child_id, &status, 0);
        //code not shown to get exit status from child
        printf("status: %d\n", status);

    } else {
        //in child
        exit(123);
    }

    return 0;
}