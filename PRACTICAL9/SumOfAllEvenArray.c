#include <stdio.h>
// Name= Abhishek Yadav  (ERP=10063)

int main() {
    int arr[7] = {10, 21, 32, 43, 54, 65, 76}, n = 7, sum = 0;

    for(int i=0;i<n;i++) {
        if(arr[i] % 2 == 0) sum += arr[i];
    }

    printf("Sum of even elements = %d\n", sum);
    return 0;
}
//Output:-
// Sum of even elements = 172