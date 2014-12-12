// 共有ライブライを作り、Pythonから利用
//  2014/12/13

#include <stdio.h>

char* oyfgets(char* buf, int SIZE){
return fgets(buf, SIZE, stdin);
}
