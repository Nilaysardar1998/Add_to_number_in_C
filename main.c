#include <stdio.h>

int main() {
    int number_01, number_02;

    printf("Enter the first number: ");
    scanf_s("%d", &number_01);

    printf("\nEnter the second number: ");
    scanf_s("%d", &number_02);

    printf("\n%d + %d = %d", number_01, number_02, number_01 + number_02);

    return 0;
}