#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num,i;

	num = argc == 2 ? atoi(argv[1]) : rand();

	printf("%d: %x %x %x ", num, num, -num, ~num+1);
	for(i=0;i<32;i++) {
		if(num&0x8fffffff) printf("1");
		else printf("0");
		num <<= 1;
	}
	printf(" %x\n", num);
	return 0;
}

