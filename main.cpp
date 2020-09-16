#include <stdio.h>
#include "add-nbo.h"

int main(int argc, char*argv[]){
	char *file1 = argv[1];
	char *file2 = argv[2];

	int a = nbotonum(file1);
	int b = nbotonum(file2);
	int c = a+b;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a,a,b,b,c,c);
}
