#include <stdio.h>

#define ARR_SIZE 4

int max(int arr[ARR_SIZE]){
    int max_num = arr[0];
    for(int i = 1; i < ARR_SIZE; i++)
        if(arr[i] > max_num)
            max_num = arr[i];
    return max_num;
}

int main() {
    int a[ARR_SIZE];
    for(int i = 0; i < ARR_SIZE; i++)
        scanf("%d", a+i);
    printf("%d", max(a));

    return 0;
}