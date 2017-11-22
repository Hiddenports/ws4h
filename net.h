#ifndef NET_H_
#define NET_H_
#include "include.h"
typedef struct {
	int sock;
	struct sockaddr_in sockaddr;
}netsock;
int sendall(int sock, char *buffer) {
	int len;
	char *ptr;
	ptr = buffer;
	len = 0;
	while(len < strlen(buffer) - 1) {
		len += send(sock, ptr, strlen(ptr), 0);
		ptr = buffer + len;
	}
	return len;
}
#endif
