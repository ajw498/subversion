
#include <stdio.h>
#include <stdlib.h>
#include <unixlib/local.h>


int main(int argc, char *argv[])
{
	char buffer[1024] = "ee ";

	if (argc != 2) {
		printf("svnee: Wrong number of args\n");
		exit(1);
	}

	__riscosify_std (argv[1], 0, buffer+3, 1020, NULL);

	return system(buffer);
}

