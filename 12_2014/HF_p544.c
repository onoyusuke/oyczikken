#include <stdio.h>
#include <limits.h>

int main(){
printf("このマシンではintは %lu バイトを占めます\n", sizeof(int));
printf("そして、intは %i から %i までの値を格納できます\n", INT_MIN, INT_MAX);
printf("そして、shortは %i から %i までの値を格納できます\n", SHRT_MIN, SHRT_MAX);
return 0;

}

