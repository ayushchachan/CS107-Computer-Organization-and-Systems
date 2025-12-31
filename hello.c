#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    // close(0);
    // int fd = open("hello.c", O_RDONLY);
    int c = getchar();
    printf("c = %d\n", c);
}