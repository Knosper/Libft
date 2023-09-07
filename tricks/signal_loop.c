#include <stdio.h>
#include <signal.h>

static int handler(int signum)
{
    static int save = 0;
    if (signum == SIGINT)
        save = 99;

    if (save == 99)
    {
        return (1);
    }
    return (0);
}

int main()
{
    signal(SIGINT,  (void *)handler);

    while (1)
    {
        printf("running\n");
        if (handler(0) == 1)
        {
            printf("Closing fd\n");
            break ;
        }
    }
    return (0);
}