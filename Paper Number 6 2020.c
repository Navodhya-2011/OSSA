#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{

    int pid = fork();

    if(pid == 0){
        for (int i = 1; i < 100; i+=2)
        {
            printf("%d\n", i);
        }

    }


    return 0;
}
