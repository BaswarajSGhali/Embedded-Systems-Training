/* The \ at the end of each line is to signal line continuation
   (i.e. to tell the compiler "this macro continues on the next line")
*/

#include<stdio.h>

#define check(x, y)                                     \
({                                                      \
      num = ((num) | (1 << pos));                  \
      printf("\n0x%x\n", num);                              \
})

int main()
{
  int num = 0x12345678;
  printf("0x%x\n", num);
  int pos = 0;
  int result;

  check(num, pos);
}


/*

output : 

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ gcc Program_to_set_bit_using_macro.c 
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ ./a.out 
0x12345678

0x12345679

*/
