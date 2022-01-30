//Set a particular bit for a given number.
//
//input:
//Enter the Number and Position: 5 1
//output:
//7



#include<stdio.h>
#include<stdbool.h>

int set(int x, int k) {
	return (x | 1 << k);
}
void main() {
	int x,k;
	printf("Enter the Number and Position: ");
	scanf("%d %d",&x,&k);
	x = set(x,k);
	printf("%d\n",x);
}

