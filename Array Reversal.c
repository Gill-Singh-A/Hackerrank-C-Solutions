#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++)
        scanf("%d", arr + i);
    for(int i = 0, j = num - 1; i < num; i++, j--)
        printf("%d ", *(arr+j));
    return 0;
}