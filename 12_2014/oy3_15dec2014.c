#include <stdio.h>

int main(){
int a[]={1,2,3,4};
int* b;

printf("sizeof(int) %li \n", sizeof(int));
printf("int* b; sizeof(b) %li \n", sizeof(b));
printf("int a[]={1,2,3,4}のsizeof(a) %li \n", sizeof(a));
}
