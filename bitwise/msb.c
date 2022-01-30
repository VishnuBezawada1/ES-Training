//Find msb bit vaue in a number ?
//
//input:
//Enter the number: 5
//output:
//msb is 4



#include<stdio.h>

int msb(int n) {
	if (n == 0) {
		return 0;
	}
	int ms = 0;
	n = n/2;
	while(n!=0) {
		n = n/2;
		ms++;
	}
	return (1 << ms);
}

void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int x = msb(n);
	printf("msb is %d\n",x);
}

