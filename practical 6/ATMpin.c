#include <stdio.h>
int main()
{
    // Animeshkushwaha_10195
    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 3;
    while (attempts > 0)
    {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == correctPIN)
        {
            printf("Authentication successful! Access granted.\n");
            return 0;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }
    printf("Your card is blocked due to multiple incorrect attempts.\n");
    return 0;
}
// output PS C:\Users\anime\OneDrive\Desktop\PFC PRACTICAL> cd "c:\Users\anime\OneDrive\Desktop\PFC PRACTICAL\practical 6\" ; if ($?) { gcc ATMpin.c -o ATMpin } ; if ($?) { .\ATMpin }
// Enter your ATM PIN: 3245
// Incorrect PIN. Attempts left: 2
// Enter your ATM PIN: 456
// Incorrect PIN. Attempts left: 1
// Enter your ATM PIN: 765
// Incorrect PIN. Attempts left: 0
// Your card is blocked due to multiple incorrect attempts.
