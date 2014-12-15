#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
int doses[]={1,3,2,1000};
printf("doses[3]= %d \n", doses[3]);
printf("*(doses+3)= %d \n", *(doses+3));
printf("*(3+doses)= %d \n", *(3+doses));
printf("3[doses]= %d \n", 3[doses]);
	return 0;
}
