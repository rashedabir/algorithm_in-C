#include <stdio.h>
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main(void)
{
    int a[100], n, i;
    int x, id;
    int m = sizeof(a) / sizeof(a[0]);
    printf("Enter number of elements in the array: ");
    scanf("%d", &n); 
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
   
    printf("Enter the search ITEM (Your ID): ");
    scanf("%d", &x);
    id = x % 100;
    int result = search(a, n, id);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}