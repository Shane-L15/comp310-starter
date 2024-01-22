#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("The sum of the two numbers is %.2lf\n", num1 + num2);
    printf("The difference of the two numbers is %.2lf\n", num1 - num2);
    printf("The product of the two number is %.2lf\n", num1 * num2);
    printf("The quotient of the two numbers is %.2lf\n", num1 / num2);

    return 0;
}
