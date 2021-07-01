#include<stdio.h>

#define set_bits(num, nbits, pos)           \
({                                          \
   int mask = ((1 < (nbits)) - 1);          \
   num = ((num) & (~((mask) << (pos))));    \
   num = (num) | (0xf << (pos));            \
   printf("0x%x\n", num);                   \
})                                          \


int main()
{
    unsigned int num = 0x12345678, nbits = 4,pos = 0;
    set_bits(num, nbits, pos);

}

/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ gcc Program_to_set_nbits_at_from_given_pos.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ ./a.out 
0x1234567f

*/
