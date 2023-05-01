#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char** a, int x, int y){
    char* temp = *(a+x);
    *(a+x) = *(a+y);
    *(a+y) = temp;
}

int lexicographic_sort(const char* a, const char* b){
    return strcmp(a, b);
}
int lexicographic_sort_reverse(const char* a, const char* b){
    return strcmp(b, a);
}
int sort_by_length(const char* a, const char* b){
    int i = strlen(a) - strlen(b);
    return (i)?i:strcmp(a, b);
}
int distinct(const char* a){
    int c[26] = {0}, d = 0;
    for(int i = 0; *(a+i); i++)
        (*(c+*(a+i)-97))++;
    for(int i = 0; i < 26; i++)
        if( *(c+i) > 0 )
            d++;
    return d;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b){
    int i = distinct(a) - distinct(b);
    return (i)?i:strcmp(a, b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i = 0; i < len; i++)
        for(int j = 1; j < len; j++)
            if( cmp_func( *(arr+j-1), *(arr+j) ) > 0)
                swap(arr, j-1, j);
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}