#include <stdio.h>

#define BUFSIZE 10

int
main (int argc, char *argv[])
{
	char buf[BUFSIZE];
  	fgets(buf, BUFSIZE - 1, stdin);
	printf("your input: %s" ,buf);
}

