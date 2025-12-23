#include <stdio.h>
int main() {
    //Animeshkushwaha_10195
    int A, B;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Numbers from %d to %d are:\n", A, B);
    for (int i = A; i <= B; i++) {
        printf("%d ", i);
    }
    return 0;
}
//output
//Enter the value of A: 5
//Enter the value of B: 13
//Numbers from 5 to 13 are:
//5 6 7 8 9 10 11 12 13