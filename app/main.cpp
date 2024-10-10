#include "iostream"

void Greetings(int8_t value)
{
    if (value != 0)
    {
        printf("Hello!\n");
    }
    else
    {
        printf("goodbye!\n");
    }
}

int main(int argc, char *argv[])
{
    int num = argc - 1;
    int8_t array[num] = {0};

    for (int i = 0; i < sizeof(array) / sizeof(int8_t); i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < sizeof(array) / sizeof(int8_t); i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    for (int i = 0; i < sizeof(array) / sizeof(int8_t); i++)
    {
        if (argv != 0)
        {
            Greetings(array[i]);
        }
    }

    return 0;
}