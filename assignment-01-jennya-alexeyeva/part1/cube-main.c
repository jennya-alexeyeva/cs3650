#include <stdio.h>
#include <stdlib.h>

long cube(long);

int
main(int argc, char* argv[])
{
    if (argc != 2) {
        puts("Usage: ./cube N");
    }

    long i = atoi(argv[1]);
    long n = cube(i);
    printf("result = %ld\n", n);
    return 0;
}
