// Useful for quickly checking address of variables on stack & heap (re: ASLR)

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char x[12];
	char *y = malloc(sizeof(char)*12);

	printf("Address of buffer x (on stack): 0x%x\n", (unsigned int)x);
	printf("Address of buffer y (on heap):  0x%x\n", (unsigned int)y);
	
	return 0;
}
