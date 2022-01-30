//Find First n bits of a number ?
//
//input:
//Enter the number and no. of first bits: 5 2
//output:
//The number for first 2 in 5 is 2




#include<stdio.h>

int count(int n) {
        int c = 0;
        while(n != 0) {
                n = n/2;
                c++;
        }
        return c;
}

int firstnbits(int n,int k) {
	if (n == 0) {
		return 0;
	}
	int c = count(n);
	if (c < k) {
		printf("Enter the valid no. of bits.\n");
		printf("should be less than or equal to %d\n",c);
		return 0;
	}
	return (n >> c-k);
}

void main() {
	int n,k;
	printf("Enter the number and no. of first bits: ");
	scanf("%d %d",&n,&k);
	printf("The number for first %d in %d is %d\n",k,n,firstnbits(n,k));
}

