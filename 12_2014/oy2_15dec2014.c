#include <stdio.h>

void kansu(char c[]){
printf("kansu(char c[])にkansu(a)としてaをchar c[]を渡す。すると、cのsizeは %lu \n", sizeof(c));
printf("つまり、cは単にポインタになっている。\n");
char *d;
c = d;
printf("char *d; c=d;のようにできる。 \n");
return;
}

int main(){
char a[] = "hello, World.";
char *b;

printf("文字配列aは%s \n", a);

a[0]='H';
printf("a[0]=Hとした文字配列aは%s \n", a);
printf("文字配列a のsizeof aは %lu \n", sizeof(a));

b=a;
printf("char *b; b=a; とする \n");
b[0]='h';
7[b]='w';
printf("b[0]=h, 7[b]=wとした文字列b*は%s \n", b);
printf("char* b のsizeof bは %lu \n", sizeof(b));

kansu(a);

return 0;
}


