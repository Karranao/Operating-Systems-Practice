#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <mqueue.h>

#include "messages.h"

int main(int argc, char * argv[])
{
    // struct mq_attr attr;
    // attr.mq_maxmsg = 4;
    // attr.mq_msgsize = sizeof(struct message);
    // char channelName[30] = "";
    // mqd_t channel = mq_open(channelName, O_CREAT | O_RDONLY | O_EXCL, 0600, &attr);

    // if(channel == -1)
    // {
    //     perror("Channel creation failed!\n");
    // }


    int pid1 = fork();
    printf("Hello world!\n");
    
    // printf("pid1: %d\n", pid1);
    
    // if(pid1 == 0) // if child
    // {
    //     printf("I'm the child!\n");

    //     // execlp("./worker", "", NULL);
    //     // printf("This part should never be reached\n")
    //     exit(1);
    // }
    
    // printf("I'm the parent!\n");


    // struct message m;
    // int result = mq_receive(channel, (char*)&m, sizeof(struct message), 0);
    // if(result == -1)
    // {
    //    perror("Receiving failed!");
    // }

    // printf("Received message with id %d and result %d\n", m.mid, m.result);


    // int status;
    
    // wait(NULL);
    
    // waitpid(pid1, &status, 0);
    
    // while (waitpid(pid1, &status, WNOHANG) != pid)
    // {
    //     printf("waiting...\n");
    //     sleep(1);
    // }


    // mq_close(channel);
    // mq_unlink(channelName);
}
