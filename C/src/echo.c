#include <echo.h>

int main(int argc,char *argv[]) {
	int bufferSize=256;
	if (argc>1){
		bufferSize=atoi(argv[1]);
	}
	//call echo from echolib
	echo(bufferSize);
	return 0;
}
