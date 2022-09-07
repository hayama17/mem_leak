#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MB 1024*1024

int main(int argc, char *argv[])
{
    char *p;
    int malloc_size = 10 * MB;
    int i=0;

    while(1)
    {
        ++i;
        printf("mem:%dMB\n",i*10);
        p = (char *)malloc(malloc_size);
        memset(p, 0, malloc_size);
        sleep(1);
        
    }


    return 0;
}
