//Find LSB bit value in a number ?
//
//input:
//Enter the number: 5
//output:
//LSB of 5 is SET (1)
//
//input:
//Enter the number: 4
//output:
//LSB of 4 is NOT SET (0)



#include<stdio.h>

int lsb(int n) {
	return n & 1;
}

void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	lsb(n) ? printf("LSB of %d is SET (1).\n",n) : printf("LSB of %d is NOT SET (0).\n",n);
}

