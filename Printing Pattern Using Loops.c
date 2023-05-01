#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int r;
    r = 2 * n - 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < r; j++)
            if( n > i )
                if( n > j )
                    if( j <= i )
                        printf("%d ", n-j);
                    else
                        printf("%d ", n-i);
                else
                    if( (2*(n-1))-j <= i )
                        printf("%d ", n-((2*(n-1))-j));
                    else
                        printf("%d ", n-i);
            else
                if( n > j )
                    if( j <= (2*(n-1))-i )
                        printf("%d ", n-j);
                    else
                        printf("%d ", n-((2*(n-1))-i));
                else
                    if( (2*(n-1))-j <= (2*(n-1))-i )
                        printf("%d ", n-((2*(n-1))-j));
                    else
                        printf("%d ", n-((2*(n-1))-i));
        printf("\n");
    }
    return 0;
}
