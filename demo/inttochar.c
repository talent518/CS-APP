#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *char_pointer;

void print_pointer(char_pointer p, size_t len) {
	int i;
	for(i=0; i<len; i++) {
		printf(" %02x", p[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int num,i;

	num = argc == 2 ? atoi(argv[1]) : rand();
	printf("%08x ", num);
	print_pointer((char_pointer) &num, sizeof(int));
}

