#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, r;
    scanf("%d", &n);
    for(r = 0; n != 0; n /= 10)
        r += n % 10;
    printf("%d", r);

    return 0;
}

