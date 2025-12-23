#include <stdio.h>
int main(){
    //Animesh kushwaha_10195
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for (int i=n; i>=1;i--) {
        for (int space=1; space<=n-i;space++) {
            printf(" ");
        }
        for (int star=1; star<=2*i-1;star++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=2;i<=n;i++) {
        for (int space=1; space<=n-i; space++) {
            printf(" ");
        }
        for (int star=1; star<=2*i-1;star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//output
//Enter the value of n: 3 
//*****
// ***
//  *
// ***
//*****
