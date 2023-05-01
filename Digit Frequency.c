#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    scanf("%[^\n]%*c", s);
    int max[10] = {0};
    for( int i = 0; i <= strlen(s); i++)
        if(s[i] >= '0' && s[i] <= '9')
            max[s[i] - '0']++;
    for( int i = 0; i < 10; i++)
        printf("%d ", max[i]);
    printf("\n");

    return 0;
}
