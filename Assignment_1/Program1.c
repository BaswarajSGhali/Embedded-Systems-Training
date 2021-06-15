
#include<stdio.h>

int main()
{
	char ch1, ch2, ch3;
	ch1 = 65;
	ch2 = 'b';
	ch3 = '3';

	printf("ch1 = %c\n", ch1);   // we should get output as A
	printf("ch2 = %c\n", ch2);   // we should get output as b
	printf("ch3 = %c\n", ch3);   // we should get output as '3'

	printf("ch1 = %d\n", ch1);   // we should get output as 65
	printf("ch2 = %d\n", ch2);   // we should get output as 98
	printf("ch3 = %d\n", ch3);   // we should get output as 51

	return 0;
}
