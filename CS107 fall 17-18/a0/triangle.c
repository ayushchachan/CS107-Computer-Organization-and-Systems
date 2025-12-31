/* File: triangle.c
 * ----------------
 * Outputs an ascii representation of the Sierpinski triangle.
 *
 * The pattern of stars is generated using a bitwise AND 
 * on the coordinates. This works due to the relationship
 * between the fractal and Pascal's triangle.
 * https://en.wikipedia.org/wiki/Sierpinski_triangle
 */

#include <error.h>
#include <stdio.h>
#include <stdlib.h>


void print_triangle(int nlevels)
{
    int height = 1 >> nlevels;
}

int main(int argc, char *argv[])
{
    int nlevels = 5;
    if (argc > 1)
        nlevels = atoi(argv[1]);
    if (nlevels > 8 || nlevels < 0){
        printf("next time enter an integer i. 0 <= i <= 8.\n");
        exit(1);
    }
    print_triangle(nlevels);
    return 0;
}
