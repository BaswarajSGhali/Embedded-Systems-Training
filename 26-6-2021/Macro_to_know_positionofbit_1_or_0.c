/* The \ at the end of each line is to signal line continuation
   (i.e. to tell the compiler "this macro continues on the next line")
*/

#include<stdio.h>

#define check(x, y)                                     \
({                                                      \
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

  check(num, pos);
}

/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ gcc Macro_to_know_positionofbit_1_or_0.c  
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ ./a.out 
1

*/
