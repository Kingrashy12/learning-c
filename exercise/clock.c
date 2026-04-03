#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

int main()
{

    time_t rawtime = 0;
    struct tm *timeinfo = NULL;
    bool isRunning = true;

    printf("Press Ctrl+C to stop the clock.\n");

    while (isRunning)
    {
        time(&rawtime);

        timeinfo = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

        sleep(1); // Sleep for 1 second
    }

    return 0;
}