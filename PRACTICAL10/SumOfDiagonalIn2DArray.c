#include <stdio.h>
// NAME = Abhishek Yadav   (ERP-10063)
int main() {
    int p, i, j, sum=0;
    printf("Enter size of square matrix: ");
    scanf("%d", &p);
    int arr[p][p];
    printf("Enter elements:\n");
    for(i=0; i<p; i++)
        for(j=0; j<p; j++)
            scanf("%d", &arr[i][j]);

    for(i=0; i<p; i++) sum += arr[i][i];  // main diagonal
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
// Enter size of square matrix: 2
// Enter elements:
// 1 2
// 3 4
// Sum of diagonal elements = 5