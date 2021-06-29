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


