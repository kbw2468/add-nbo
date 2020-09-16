#include "add-nbo.h"
#include <stdio.h>
#include <stdint.h>


uint32_t  nbotoled(uint32_t n){
	uint32_t n1 = (n >> 24);
	uint32_t n2 = ((n& 0x00ff0000) >> 8);
	uint32_t n3 = ((n& 0x0000ff00) << 8);
	uint32_t n4 = (n << 24);

	return (n1|n2|n3|n4);
}
	


int nbotonum(char *f){
	uint32_t buf;
	uint32_t num = 0;
	FILE *fp = fopen(f,"r");

	if(fp!=NULL) {
		 	fread(&buf, sizeof(int),1, fp);
		}
	num = nbotoled(buf);
	fclose(fp);
	return num;
}
	


