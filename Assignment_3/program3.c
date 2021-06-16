#include<stdio.h>

int decimal_to_binary(int n);

int main()
{
	int n;
	printf("Enter the number n\n");
	scanf("%d", &n);

	decimal_to_binary(n);
	return 0;
}

int decimal_to_binary(int n)
{
	if(n == 0)
		return 0;
	int temp;
    
	decimal_to_binary(n/2);

	temp =  n % 2;
	printf("%d ", temp);

}
