#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5  

float compute_z(float x, float y) 
{
    if (x <= y) 
    {
        return pow(x, 2) + pow(y, 2);
    } 
    
    else 
    {
        return x - pow(y, 2);
    }
}

int main() 
{
    system("chcp 65001");
    float X[N], Y[N], Z[N];
    int i;

    printf("Введіть %d значень масиву X:\n", N);

    for (i = 0; i < N; i += 1) 
    {
        printf("X[%d] = ", i);
        scanf("%f", &X[i]);
    }

    printf("Введіть %d значень масиву Y:\n", N);

    for (i = 0; i < N; i += 1) 
    {
        printf("Y[%d] = ", i);
        scanf("%f", &Y[i]);
    }

    for (i = 0; i < N; i += 1) 
    {
        Z[i] = compute_z(X[i], Y[i]);
    }

    printf("\nМасив Z:\n");

    for (i = 0; i < N; i += 1) 
    {
        printf("Z[%d] = %.2f\n", i, Z[i]);
    }

    return 0;
}
