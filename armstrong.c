#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += power(digit, 3);  
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;
    printf("Armstrong numbers between 1 and 100 are:\n");

    for (n=1; n<=100; n++) {
        if (isArmstrong(n))
            printf("%d ", n);
    }

    printf("\n");

    return 0;
}
