#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

sig_atomic_t child_exit_status;

void clean_up_child_process(int signal_number){
    /*clean up the child process.*/
    int status;
    wait (&status);
    /*store its exit status in a global variable*/
    child_exit_status = status;
}

int main(){
    
    
    return 0;
}