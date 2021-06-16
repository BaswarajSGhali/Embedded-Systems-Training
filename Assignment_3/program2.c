#include<stdio.h>

int print_numbers(int n);

int main()
{
	int n;
	printf("Enter the number n\n");
	scanf("%d", &n);

	print_numbers(n);
	return 0;
}

int print_numbers(int n)
{
	if(n == 0)
		return 0;
	print_numbers(n - 1);
	printf("%d ", n);
}

