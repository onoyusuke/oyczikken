#include <stdio.h>

int main(){
printf("sizeof(int) %zu \n",sizeof(int));
printf("sizeof(char) %zu \n",sizeof(char));
printf("sizeof(int*) %zu \n",sizeof(int*));
printf("sizeof(char*) %zu \n",sizeof(char*));
printf("sizeof \"abc\" %zu \n",sizeof "abc");
printf("sizeof(void*) %zu \n",sizeof(void*));
/*
sizeof(char);
sizeof(int*);
sizeof(char*);
sizeof "abc";
sizeof(void*);
*/
}
