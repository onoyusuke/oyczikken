#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
char *available_resources[] = {
	"color monitor",
	"big disk",
	"Cray"     /* Oops. no comma! */
	"on-line drawing routines",
	"mouse",
	"keyboard",
	"power cables", /* comma! */
};
for (int i=0 ; i<=6; i++){
printf("%s\n", available_resources[i]);
}

}
