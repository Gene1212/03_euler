#include <stdio.h>
#include <stdlib.h>

int multiple_of (int num1 , int num2) ;
int smallest_positive(int num1);

int multiple_of (int num1 , int num2) {
	int sum=0;
	int count;
	for (count = 0; count < 1000; count ++) {
		if (count % 3 ==0 || count % 5 == 0)
			sum+= count;
	}
	return sum;
}

int smallest_positive (int num1) {

	unsigned int number = 0;
	unsigned int i;
	int j;
	int counter = 0;
	for (i = 20; i < 9999999999; i++) {
		for (j = 1; j <= num1; j++) {
			if (i % j == 0) 
				counter++;
		}
		if (counter == 20) {
			number = i;
			return number;
		}
		else
			counter = 0;	
	}
	
}

int sumsquare_diff (int num1) {
	unsigned int sum_square = 0;
	unsigned int square_sum = 0;
	int i;
	int j;
	for (int i = 1; i <= num1; i++) {
		sum_square += i * i;
	}
	for (int j = 1; j <= num1; j++) {
		square_sum+=j;
	}
	square_sum=square_sum * square_sum;
	return (square_sum - sum_square);
}

int main()
{
	printf("It may take a while for the second function to load \n");

	int res = multiple_of(3,5);
	printf("The sum of multiples of 3 and 5 is %d \n", res);

	int result = smallest_positive(20);
	printf("The smallest positive number that is divisible by all numbers from 1 to 20 is %d \n", result); 
	
	int result2 = sumsquare_diff(100);
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d \n", result2);

	return 0;
}