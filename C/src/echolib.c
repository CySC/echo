#include <stdio.h>
#include <echo.h>

void echo(int bufferSize) {
	// Disable output buffering.
	setbuf(stdout, NULL);
	char buffer[bufferSize];
	while (fgets(buffer, sizeof(buffer), stdin)) {
		printf("%s", buffer);
	}
}
