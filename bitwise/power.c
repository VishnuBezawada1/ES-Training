//Check if number is power of 2.
//
//input:
//Enter the number to check if number is power of 2: 10
//output:
//10 is not power of 2
//
//input:
//Enter the number to check if number is power of 2: 4
//output:
//4 is power of 2


#include<stdio.h>
#include<stdbool.h>

bool isPower(int x) {
	//The first 'x' in expression is for the condition of 0.
	return x && (!(x&(x-1)));
}

void main() {
	int x;
	printf("Enter the number to check if number is power of 2: ");
	scanf("%d",&x);
	isPower(x) ? printf("%d is Power of 2.\n",x) : printf("%d is Not Power of 2.\n",x);
}
