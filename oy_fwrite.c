#include <stdio.h>

int main(int argc, char *argv[]){
	int age = 40;
	char *name = "oy\n";
	fwrite (&age, sizeof(age), 1, stdout);
	fwrite (name, sizeof(char), 3, stdout);
}
