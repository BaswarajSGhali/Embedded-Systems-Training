#include<stdio.h>

#define cube(x)  ((x) * (x) * (x))

int main()
{
	int i = 2, result;
	result = cube(++i);
	printf("\n%d", result);
	return 0;
}

//./a.out

//80 basavaraj@basavaraj-VirtualBox:~/Embedded_Training/Assignment_5$. Actually I expect the output to be 27, but it is giving 80, this is the disadvantage of macro function
// Actually how its working is, when macro is called, result = ((++i) * (++i) * (++i)).
// result = 3 * 4 * 5 = 80 
