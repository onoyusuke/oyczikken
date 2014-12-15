#include <stdio.h>

int y = 1;

int main()
{
int x = 4;
const char* a = "hello.";

printf("ローカル変数xの格納位置は%p \n", &x);
printf("グローバル変数yの格納位置は%p \n", &y);
printf("文字定数aの格納位置は%p \n", &a);

return 0;
}

