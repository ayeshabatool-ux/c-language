#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp;

    // Count digits
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to the power of total digits
    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    // Return 1 if Armstrong, else 0
    return (sum == original);
}

int main() {
    printf("Armstrong numbers from 1 to 100 are:\n");

    for (int i = 1; i <= 100; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return
