#include <stdio.h>

void generate_initializer(char * string)
{
	static char separator = ' ';
	printf( "%c %s \n", separator, string);
	separator = ',';
}

int
main (int argc, char *argv[])
{
	for ( int i = 1; i < argc; i++ ){
		generate_initializer(argv[i]);
	}

	return 0;
}
