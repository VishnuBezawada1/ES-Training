//Find last n bits of a number ?
//
//input:
//Enter the number and no. of last bits: 4 1
//output:
//The bit value of last 1 in 4 is 0
//
//input:
//Enter the number and no. of last bits: 7 1
//output:
//The bit value of last 0 in 7 is 3





#include<stdio.h>

int lastNbits(int n, int k) {
	return (((1 << k) - 1) & (n >> (1-1)));
}

void main() {
	int n,k;
	printf("Enter the number and no. of last bits: ");
	scanf("%d %d",&n,&k);
	printf("The bit value of last %d in %d is %d\n",k,n,lastNbits(n,k));
}

