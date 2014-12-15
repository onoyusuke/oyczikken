// ダイナミックリンクのテスト用 

/*
gcc -shared oytest.c -o ./liboytest.dylib
*/

#include <stdio.h>
#include "oytest.h"

void oytest(){
	printf("hello, World\n");
	return;
}
