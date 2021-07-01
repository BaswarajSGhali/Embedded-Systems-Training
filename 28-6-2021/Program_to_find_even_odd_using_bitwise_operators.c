#include<stdio.h>

#define even_or_odd(num)   \
({                         \
 if(num & 1)               \
   printf("odd\n");        \
 else                      \
   printf("even\n");       \
})


int main()
{
    unsigned int num = 0x7;
    even_or_odd(num);
}

/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ gcc Program_to_find_even_odd_using_bitwise_operators.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ ./a.out 
odd

*/
