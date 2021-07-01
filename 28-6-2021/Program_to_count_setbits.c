#include<stdio.h>

#define count_set_bit(num)        \
({                                \
 int count = 0;                   \
 while(num)                       \
 {                                \
     num = ((num) & (num - 1));   \
     count++;                     \
 }                                \
 printf("%d\n", count);           \
 })                               \

int main()
{
    unsigned int num = 0x3;
    count_set_bit(num);
}


/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ gcc Program_to_count_setbits.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ ./a.out 
2

*/
