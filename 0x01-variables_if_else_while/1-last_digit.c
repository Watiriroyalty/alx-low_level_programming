#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	int lastDigit = n % 10;

 	 if (lastDigit > 5) {
 	   printf("%d and is greater than 5\n", lastDigit);
 	 } else if (lastDigit == 0) {
  	  printf("%d and is 0\n", lastDigit);
 	 } else {
  	  printf("%d and is less than 6 and not 0\n", lastDigit);
 	 }

  return (0);
}
