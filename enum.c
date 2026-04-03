#include <stdio.h>

typedef enum
{
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
} Day;

typedef enum
{
    SUCCESS,
    PENDING,
    FAILURE
} Status;

void connectStatus(Status status);

int main()
{
    Day today = SUNDAY;

    printf("%d\n", today);

    if (today == SUNDAY || today == SATURDAY)
    {
        printf("It's the weekend\n");
    }
    else
    {
        printf("It's weekday\n");
    }

    Status status = PENDING;
    connectStatus(status);

    return 0;
}

void connectStatus(Status status)
{
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successful\n");
        break;
    case FAILURE:
        printf("Could not connect\n");
        break;
    case PENDING:
        printf("Connecting...\n");
        break;
    }
}