//Check if 2 numbers have opposite sign are not?

//1. input:
//Enter the Numbers: -2 4
//output:
//Signs of numbers is Opposite.

//2. input:
//Enter the Numbers: 2 2
//output:
//Signs of numbers is not opposite.

#include<stdio.h>
#include<stdbool.h>

bool oppsign(int x,int y) {
	return ((x^y)<0);
}

void main() {
	int x,y;
	printf("Enter the Numbers: ");
	scanf("%d %d",&x,&y);
	if (oppsign(x,y) == true) {
		printf("Signs of numbers is Opposite.\n");
		return;
	}
	printf("Signs of numbers is NOT Opposite.\n");
}

