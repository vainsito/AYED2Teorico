#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>

bool det_cima (int a[], int n)
{
int i = 0;
int posCima = 0;
bool cima = true;
while (i < n)
{
    if (a[i] < a[i+1])
    {
        cima = true;
        i++;
    }
    else
    {
        posCima = i;
        break;
    }
}
while(posCima < n)
{
    if (a[posCima]>a[posCima+1])
    {
        cima = true;
        posCima++;
    }
    else
    {
        cima = false;
        break;
    }
}
return cima;
}
int main(void)
{
    int a[7] = {1,4,3,7,3,2,1};
    int n = 6;
    int cima = det_cima(a,n);
    printf("%d", cima);
    return 0;
}

proc f(in n: nat)
    if n<= 1 then skip
    else
        for i = 1 to K do f(n div L) od 
        for i = 1 to n^4 do omega(1)
end proc
