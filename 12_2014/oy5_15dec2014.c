#include <stdio.h>

int main(){

void* a;
int* b;
char* c;

b = (int *) a;
c = (char *) a;
printf("aのアドレス：%p \n", b);
printf("aをint*にcastしたbを1だけ増やす：%p \n", ++b);
printf("aをchar*にcastしたcを1だけ増やす：%p \n", ++c);
printf("void*型のaを1だけ増やす：%p \n", ++a);

a = (void *) b;

return 0;

}
