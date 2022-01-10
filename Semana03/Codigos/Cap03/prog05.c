#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

sig_atomic_t sigusr1_count = 0;
/*to write a program that’s portable to any standard UNIX system, 
,though, use sig_atomic_t for these global variables.*/


void handler(int signal_number){
    ++sigusr1_count;
}

int main(){
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = &handler;
    sigaction(SIGUSR1, &sa, NULL);

    /*Do some lengthy stuff here*/

    printf("SIGUSR1 was raised %d times\n", sigusr1_count);

    return 0;
}