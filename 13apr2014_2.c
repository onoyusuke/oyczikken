#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
int nums[] = {1,2,3};
char s[]="How big is it?";
printf("int %p \n",nums);
printf("int+1 %p \n",nums+1);
printf("char %p \n",s);
printf("char+1 %p \n",s+1);
	return 0;
}
