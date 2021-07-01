#include<stdio.h>

int main()
{
    int arr[] = {20, 20, 40, 40, 13, 13, 11, 88, 88, 99, 99, 11, 11};
    int result = 0;

    for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        result = arr[i] ^ result;
    }
    printf("%d\n", result);


}


/*

output :

basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ gcc check_array_members_evenrepeat_or_oddrepeat.c 
basavaraj@basavaraj-VirtualBox:~/Embedded_Training/28-6-2021$ ./a.out 
11

*/
