#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Combination (int n, int r)
{
	int high, low;
	high = factorial(n);
	low = factorial (n-r)*factorial (r);

	return(high/low);
}
int factorial(int n)
{
	int result=1;
	int i;
	for(i=1; i<=n; i++)
		{
		result*=i;
		}	
	return result;
}

int main(int argc, char *argv[])
{
	int n, r;
	int c;
	printf ("input a n and r\n");
	scanf ("%d\n", &n);
	scanf("%d", &r);

	c= Combination(n,r);
	printf("Combination result is %d\n", c);
	return 0; 
}



