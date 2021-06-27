#include<stdio.h>

inline int add(int a, int b)
{
        return (a+b);
}


int main()
{
	int a, b, sum;
	printf("Enter the number a and b\n");
	scanf("%d %d", &a, &b);
        sum = add(a, b);
	printf("\nsum is %d", sum);
	return 0;

}



