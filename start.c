#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char cmd[100];
	FILE *config;
	memset(cmd, '\0', sizeof(cmd));
	if(argc == 2) {
		strncpy(cmd, argv[1], 97);
		strcat(cmd, "&");
		system(cmd);
		return 0;
	}
	config = fopen("config/mainsrc", "r");
	if(config == NULL) {
		printf("mainsrc config not available\n");
		exit(1);
	}
	fgets(cmd, 98, config);
	system(cmd);
	return 0;
}
