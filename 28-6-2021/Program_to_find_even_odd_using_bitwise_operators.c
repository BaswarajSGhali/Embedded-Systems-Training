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

