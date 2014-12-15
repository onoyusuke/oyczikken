 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <unistd.h>
 #include <errno.h>
 #include <pthread.h> // pthreadライブラリのためのヘッダ

void error(char* msg)
 {
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
 }

// スレッド関数
 void* does_not()
 {
   int i = 0;
   for (i = 0; i < 5; i++) {
     sleep(1);
     puts("Does not!");
   }
   return NULL;
 }
// スレッド関数
 void* does_too()
 {
   int i = 0;
   for (i = 0; i < 5; i++) {
     sleep(1);
     puts("Does too!");
   }
   return NULL;
 }

int main(){
// スレッドの情報はpthread構造体に格納される
   pthread_t t0;
   pthread_t t1;
// スレッドの作成
   if (pthread_create(&t0, NULL, does_not, NULL) == -1)
     error("Can't create thread t0");
   if (pthread_create(&t1, NULL, does_too, NULL) == -1)
     error("Can't create thread t1");
// スレッドが完了するのを待つ
   void* result; // void型のポインタresultに関数からの戻り値が格納される。
   if (pthread_join(t0, &result) == -1)  // ポインタであるresultへのポインタ(&result)をわたす
	   // pthread_join()はスレッド関数の完了を待ち、戻り値をresultに格納。
     error("Can't join thread t0");
   if (pthread_join(t1, &result) == -1)
     error("Can't join thread t1");
} 
