#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
  if( k > n ){
      n += k;
      k = n - k;
      n = n - k;
  }
  int max[3] = {0, 0, 0};
  for(int i = 1; i <= k; i++)
      for( int j = i + 1; j <= n; j++){
          if( (i & j) > max[0] && (i & j) < k )
              max[0] = (i & j);
          if( (i | j) > max[1] && (i | j) < k )
              max[1] = (i | j);
          if( (i ^ j) > max[2] && (i ^ j) < k )
              max[2] = (i ^ j);
      }
  printf("%d\n%d\n%d", max[0], max[1], max[2]);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
