#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &m5);


    total = m1 + m2 + m3 + m4 + m5;

    percentage = (total / 500) * 100;

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%\n", percentage);


    if (percentage >= 85) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: B\n");
    }
    else if (percentage >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Result: Fail\n");
    }

    return 0;
}
