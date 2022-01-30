//Check if particular bit is set or not ?
//
//input:
//Enter the number and position to check: 5 2
//output:
//2th position is SET in a given number 5



#include<stdio.h>

int check(int x,int k) {
	return x & (1 << k);
}

int main() {
	int x,k;
	printf("Enter the number and position to check: ");
	scanf("%d %d",&x,&k);
	int z = check(x,k);
	z ? printf("%dth Position is SET in a given number %d\n",k,x) : printf("%dth Position is NOT SET in a given number %d\n",k,x);
}

