// http://www.sic.shibaura-it.ac.jp/~yamaken/docs/proj6.pdf

#include <fcntl.h>
int main(){
int fd;
char buff[100];
fd = open("test.txt", O_RDONLY);
read(fd, buff, 10);
write(1, buff, 10);
close(fd);
}
