#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int go = 1;
	unsigned long int let  = 2;
	unsigned long int l = 1000000000;
	unsigned long int go1;
	unsigned long int go2;
	unsigned long int let1;
	unsigned long int let2;

	printf("%lu", let);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", let);
		let += go;
		go = let - go;
	}

	go1 = (go / l);
	go2 = (go % l);
	let1 = (let / l);
	let2 = (let % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", let1 + (let2 / l));
		printf("%lu", let2 % l);
		let1 = go1 + go1;
		go1 = let1 - go1;
	        go2 = let2 + go2;
		go2 = let2 - go2;
	}
	printf("\n");
	return (0);
}
