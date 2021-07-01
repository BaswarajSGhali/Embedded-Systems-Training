#include<stdio.h>

#define power_of_2_or_not(num)           \
({                                       \
 if(((num) & (num - 1)) == 0)              \
   printf("Power of 2\n");               \
 else                                    \
   printf("It is not power of 2\n");     \
})


int main()
{
    unsigned int num = 6;
    power_of_2_or_not(num);
}

/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ gcc Program_to_find_power_of_2.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ ./a.out 
It is not power of 2

*/
