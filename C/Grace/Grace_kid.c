#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define A "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#define A %2$c%3$s%2$c%1$c#define B %2$c%4$s%2$c%1$c#define C() int main() {int fd = open(B, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU); if (fd < 0) return (1); dprintf(fd, A, 10, 34, A, B);close(fd);}%1$c%1$c/*%1$c	a%1$c*/%1$c%1$cC()%1$c"
#define B "Grace_kid.c"
#define C() int main() {int fd = open(B, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU); if (fd < 0) return (1); dprintf(fd, A, 10, 34, A, B);close(fd);}

/*
	a
*/

C()
