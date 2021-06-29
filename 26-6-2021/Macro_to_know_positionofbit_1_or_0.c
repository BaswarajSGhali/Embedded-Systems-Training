/* The \ at the end of each line is to signal line continuation
   (i.e. to tell the compiler "this macro continues on the next line")
*/

#include<stdio.h>

#define SUM_A(x, y)                                     \
({                                                      \
    float answer;                                       \
     if((num) & (1 << pos))                             \
        printf("1");                                    \
     else                                               \
        printf("0");                                    \
                                                        \
})

int main()
{
  int num = 0x12345678;
  int pos = 4;
  int result;

  SUM_A(num, pos);
}

