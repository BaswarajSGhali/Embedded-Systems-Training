#include<stdio.h>

int sum_of_digits(int n);

int main()
{

	int n, result;
	printf("Enter the number n\n");
	scanf("%d", &n);
	result = n;

	if(n < 10)
	{
		printf("sum is %d", n);
	}

	else
	{
		while(result >= 10)
		{
			n = result;
			result = sum_of_digits(n);
		}

		printf("sum is %d", result);
	}

	return 0;

}


int sum_of_digits(int n)
{
	int sum = 0, temp;

	while(n > 0)
	{
		temp = n;
		n = n % 10;
		sum = sum + n;
		temp = temp / 10;
		n = temp;
	}

	return sum;
}

