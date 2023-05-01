#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a[3];
    float b, c, d, e;

    scanf("%d %d\n", &a[0], &a[1]);
    scanf("%f %f", &b, &c);

    a[2] = a[0] + a[1];
    a[3] = a[0] - a[1];
    d = b + c;
    e = b - c;

    printf("%d %d\n", a[2], a[3]);
    printf("%.1f %.1f", d, e);
    
    return 0;
}

