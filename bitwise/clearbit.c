//Clear a particular bit for a given number.
//
//input:
//Enter the Number and Position: 5 0
//output:
//4



#include<stdio.h>

int clear(int x, int k) {
	return (x & ~(1 << k));
}

void main() {
	int x,k;
	printf("Enter the Number and Position: ");
	scanf("%d %d",&x,&k);
	x = clear(x,k);
	printf("%d\n",x);
}

