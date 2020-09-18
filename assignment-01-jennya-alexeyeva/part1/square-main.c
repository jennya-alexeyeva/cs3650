#include <stdio.h>
#include <stdlib.h>

long square(long);

int
main(int argc, char* argv[])
{
    if (argc != 2) {
        puts("Usage: ./square N");
    }

    long i = atoi(argv[1]);
    long n = square(i);
    printf("result = %ld\n", n);
    return 0;
}
