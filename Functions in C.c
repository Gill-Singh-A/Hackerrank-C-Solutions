#include <stdio.h>

int max(int arr[4]){
    int max_num = arr[0];
    for(int i = 1; i < 4; i++)
        if(arr[i] > max_num)
            max_num = arr[i];
    return max_num;
}

int main() {
    int a[4];
    for(int i = 0; i < 4; i++)
        scanf("%d", a+i);
    printf("%d", max(a));

    return 0;
}