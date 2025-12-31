#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF){
        putchar(c);
    }
    printf("value of EOF = %d\n", c);
}