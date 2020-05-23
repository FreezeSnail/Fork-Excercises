#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv){
    system("ls");
    //This hides fork exec waitpid from the writer
    return 0;
}