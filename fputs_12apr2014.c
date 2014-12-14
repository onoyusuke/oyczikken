#include <stdio.h>
#include <stdlib.h>
enum { SIZE = 10, };

int
main (int argc, char *argv[])
{

char buf[100];
fgets(buf, SIZE, stdin);
for (int i=0; i<SIZE; i++)
{
printf("%u\n", buf[i]);
}
}
