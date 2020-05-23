#include <stdio.h>
#include <sys/wait.h> //waitpid()
#include <unistd.h> // fork(), WIFEXITED, WEXITSTATUS

int main(){
    int status;
    pid_t child = fork();
    if(child == -1) return 1; //failed
    if(child > 0){
        //parent waiting for child
        pid_t pid = waitpid(child, &status, 0);
        if(pid != -1 && WIFEXITED(status)){
            int low8bits = WEXITSTATUS(status);
            printf("Process %d returned %d\n", pid, low8bits);
        }
    } else {
        //child
        execl("/bin/ls", "/bin/ls", ".", (char *) NULL); // 'ls .'
    }
}