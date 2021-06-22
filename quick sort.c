#include <stdio.h>

void decode (int *a, int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void quicksort(int *a, int first, int last)
{
    int temp, i = first, j = last, pivot = a[(first+last)/2];
    while(i <= j)
    {
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;
        if(i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if(first < j)
    {
        quicksort(a, first, j);
    }
    if(last > i)
    {
        quicksort(a, i, last);
    }
}


int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n);
    int i, len, a[n];
    printf("enter data : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n-1);
    printf("sorted array\n");
    decode(a, n);
    return 0;
}
