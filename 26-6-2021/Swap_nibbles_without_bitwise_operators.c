/* We have used the concept of multiplication and division w.r.t bit shifting, we know that multiplication by 2
   is left shift of bits once and division by 2 is right shift of bits once.

** Algorithm is :
** step 1 : Take the byte for which we want to swap nibble into char

** step 2 : We divide the byte by 16, so that bits are shifted right by 4 times.
            0x78 = 0111 1000, after shifting right 4 times, we get 0000 0111 = 0x07. We are storing this into one variable p

** step 3 : We multiply the original byte by 16, so that bits are shifted left by 4 times.
            0x78 = 0111 1000, after shifting left 4 times, we get 1000 0000 = 0x80. We are storing this into one variable q

** step 4 : Now we add both the variables p and q, result = p + q. (0x07 + 0x80 = 0x87). 0x87 = 1000 0111
            we can see that nibbles are shifted.
*/


#include<stdio.h>
int decimal_to_binary(int n);

int main()
{
   unsigned char a = 0x78;
   decimal_to_binary(a);
   printf("\n");

   unsigned char p, q, result;

    p = a / 16;
    //printf("\n%x\n", p);

    q = a * 16;
    //printf("\n%x\n", q);

    result = p + q;
    //printf("\n%x\n", result);
    printf("\n");

    decimal_to_binary(result);


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

/*

output : 

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ gcc Swap_nibbles_without_bitwise_operators.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ ./a.out 
1 1 1 1 0 0 0 

1 0 0 0 0 1 1 1

*/
