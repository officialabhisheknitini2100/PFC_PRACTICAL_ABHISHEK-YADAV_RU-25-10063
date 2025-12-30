#include <stdio.h>
// NAME = Abhishek Yadav (ERP=10063);
int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &arr[i][j]);

    for(i=0; i<r; i++) {
        int sum = 0;
        for(j=0; j<c; j++) sum += arr[i][j];
        printf("Sum of row %d = %d\n", i+1, sum);
    }
    return 0;
}
//Output:-
// Enter rows and columns: 2 3
// Enter elements:
// 1 2 3 
// 1 2 3
// Sum of row 1 = 6
// Sum of row 2 = 6