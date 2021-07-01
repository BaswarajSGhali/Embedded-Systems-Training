/* We have used unions to find the bit at given position
** Algorithm is :
** step 1 : First we define the members of union as char array of 4 bytes and int num which is of 4 bytes
** step 2 : We should know the endianess of machine to get the solution
** step 3 : So position is entered by the user w.r.t the bit they want, so by knowing the bit, we will pass that particular
            byte to function decimal_to_binary, also we pass the position.
** step 4 : In function decimal_to_binary, we are running a for loop for the pos number of times, for each iteration we will
            be getting binary values of byte passed. So finally when loop ends, we have the bit for particular position asked.
*/


#include<stdio.h>
#include<stdint.h>
void decimal_to_binary(char n, int pos);

union abc
{
    char byte[4];
    int num;
};

typedef union abc abc;

int main()
{
    int pos;
    abc p;
    

    p.num = 0x12345678;

    printf("Enter the position\n");
    scanf("%d", &pos);

    if(pos >= 0 || pos <= 7)
       {
           decimal_to_binary(p.byte[0], pos);
       }

    else if(pos > 7 || pos < 16)
        decimal_to_binary(p.byte[1], pos);

    else if(pos > 15 || pos < 24)
        decimal_to_binary(p.byte[2], pos);

    else if(pos > 23 || pos < 32)
        decimal_to_binary(p.byte[3], pos);
}

void decimal_to_binary(char n, int pos)
{
   
    int temp;

    for(int i = 0; i <= pos; i++)
    {
	  temp =  n % 2;
	  n = n / 2;
    }

    printf("bit at position %d is %d\n", pos, temp);


}

/*

output: 

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ gcc Finding_the_bit_at_given_pos_without_bit_operators.c
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/26-6-2021$ ./a.out 
Enter the position
6
bit at position 6 is 1

*/
