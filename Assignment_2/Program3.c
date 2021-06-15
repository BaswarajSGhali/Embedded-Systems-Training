#include<stdio.h>

int main()
{
	int x = 10, y = 3;

	{
		int x = 100, z = 10;
		printf("%d %d\n", x, z);
	}

	printf("%d %d\n", x, z);    // z does'nt exist
	return 0;
}

// the output of the above code is error, because after the bracket z does'nt exist
