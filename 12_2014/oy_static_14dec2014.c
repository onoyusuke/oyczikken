#include <stdio.h>

int func(void)
{
	static int count = 0;
	return ++count;
}

int main(){
	for (int i=0; i<=5; i++){
	printf("呼び出し回数 %i \n", func());
	}
}

