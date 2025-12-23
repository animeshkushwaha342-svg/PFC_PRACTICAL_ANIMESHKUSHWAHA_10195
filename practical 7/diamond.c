#include <stdio.h>
int main(){
    //Animeshkushwaha_10195
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        for (int space = 1; space<=n-i; space++) {
            printf(" ");
        }
        for (int star=1; star<=2*i-1; star++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--) {
        for (int space=1; space<=n-i; space++) {
            printf(" ");
        }
        for (int star=1; star<=2*i-1 ;star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//output
//Enter the value of n: 4
//   *
 // ***
 //*****
//*******
 //*****
  //***
  // *