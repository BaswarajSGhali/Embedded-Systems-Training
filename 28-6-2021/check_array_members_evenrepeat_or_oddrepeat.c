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
