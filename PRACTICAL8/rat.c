#include <stdio.h>
// ABHISHEK YADAV_10063
void printTriangle(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }    
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printTriangle(n);
    return 0;
}

/*OUTPUT
*
**
***
****
*****
******
*******
********
*********
**********
***********
************

*/