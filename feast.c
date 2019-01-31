#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char*argv[])
{
    printf("Starting memory feast...\n");
    int n = 0;
    int m;
    sscanf (argv[1], "%i", &m);
    while (n < m) {
        memset(malloc(1024*1024L), 'w', 1024*1024L);
        n++;
        printf("%d...\n", n);
    } 
    printf("Survived memory feast...\n");
    printf("Hanging out for 10 seconds so memory info can be captured...\n");
    sleep(10);
    return 0;
}
