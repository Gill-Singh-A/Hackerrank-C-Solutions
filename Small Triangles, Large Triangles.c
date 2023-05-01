#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float* area = (float*) malloc(n * sizeof(float));
    for( int i = 0; i < n; i++)
    {
        float a = tr[i].a, b = tr[i].b, c = tr[i].c;
        float p = (a+b+c)/2;
        area[i] = p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for( int j = 0; j < n - 1; j++)
        {
            if( area[j] > area[1+j])
            {
                area[j] += area[1+j];
                area[1+j] = area[j] - area[1+j];
                area[j] -= area[1+j];

                tr[j].a += tr[1+j].a;
                tr[1+j].a = tr[j].a - tr[1+j].a;
                tr[j].a -= tr[1+j].a;

                tr[j].b += tr[1+j].b;
                tr[1+j].b = tr[j].b - tr[1+j].b;
                tr[j].b -= tr[1+j].b;

                tr[j].c += tr[1+j].c;
                tr[1+j].c = tr[j].c - tr[1+j].c;
                tr[j].c -= tr[1+j].c;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}