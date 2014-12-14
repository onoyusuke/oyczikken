// 共有ライブライを作り、Pythonから利用
// 関数学習用 2014/12/13

#include <stdio.h>

char* oyfgets(char* buf, int SIZE){
return fgets(buf, SIZE, stdin);
}


// HeadFirst (chapter 11)
#include <stdio.h>
 #include <string.h>
 #include <errno.h>
 #include <stdlib.h>
 #include <sys/socket.h>
 #include <arpa/inet.h>
 #include <unistd.h>
 #include <netdb.h>

// HF (p.479)

 void error(char* msg)
 {
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
 }

// Client

 int open_socket(char* host, char* port)
 {
   struct addrinfo *res;
   struct addrinfo hints;
   memset(&hints, 0, sizeof(hints));
   hints.ai_family = PF_UNSPEC;
   hints.ai_socktype = SOCK_STREAM;
   if (getaddrinfo(host, port, &hints, &res) == -1)
     error("Can't resolve the address");
   int d_sock = socket(res->ai_family, res->ai_socktype,
                        res->ai_protocol);
   if (d_sock == -1)
     error("Can't open socket");
   int c = connect(d_sock, res->ai_addr, res->ai_addrlen);
   freeaddrinfo(res);
   if (c == -1)
     error("Can't connect to socket");
   return d_sock;
 }

// Client

int say(int socket, char* s)
	 {
		    int result = send(socket, s, strlen(s), 0);
		       if (result == -1)
			            fprintf(stderr, "%s: %s\n", "Error talking to the server", strerror(errno));
		          return result;
			   }


