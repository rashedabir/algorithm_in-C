#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
void binPacking(int arr[], int size, int n) {
    int binCount = 0, i, j;
    int binValues[n];
    for (i = 0; i < n; i++)
        binValues[i] = size;
 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (binValues[j] - arr[i] >= 0) {
                binValues[j] -= arr[i];
                break;
            }
        }
 
    for (i = 0; i < n; i++)
        if (binValues[i] != size)
            binCount++;
 
    printf("Number of bins required using first fit decreasing algorithm is: %d", binCount);
}
 
int sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
            if (arr[j] < arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
}
 
int main() {
    printf("Enter the number of items in Set: ");
 
    int n, i, size;
    scanf("%d", &n);
    printf("Enter %d items: ", n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the bin size: ");
    scanf("%d", &size);
    arr[n] = sort(arr, n);
    binPacking(arr, size, n);
	return 0;
}