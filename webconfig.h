#ifndef WEBCONFIG_H_
#define WEBCONFIG_H_
#ifndef INCLUDE_H_
#include "include.h"
#endif
typedef FILE* file;
void readf(file fp, char *buffer) {
	memset(buffer, '\0', sizeof(buffer));
	fgets(buffer, sizeof(buffer), fp);
	return;
}
void writef(file fp, char *buffer) {
	fprintf(fp, "%s", buffer);
}
void writeline(file fp, const char buffer[500]) {
	fprintf(fp, buffer);
}
int compstr(char *buffer, const char buf[500], int n) {
	if(strcmp(buffer, buf, n) == 0)
		return 1;
	else
		return 0;
}
#endif
