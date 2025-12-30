#include <stdio.h>
//Abhishek Yadav (ERP=10063);
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, n = 5;
    printf("Original: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);

    for(int i=0;i<n/2;i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("\nReversed: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
// Original: 1 2 3 4 5 
// Reversed: 5 4 3 2 1