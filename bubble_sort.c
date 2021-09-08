#include <stdio.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf("%d ", a[i]);
    }
}
int main() {
  int a[100], n, i, d, swap;
  printf("Enter number of elements in the array: ");
  scanf("%d", &n); 
  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("\nAfter shorting ");
  bubble_sort(a, n);
  printf("and the numbers evenly divisible by 3 or 6 are ");
  for (i = 0; i < n; i++)
    if(a[i] % 3 == 0 || a[i] % 6 == 0){
     printf("%d ", a[i]);
    }
  return 0;
}