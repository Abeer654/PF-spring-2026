#include <stdio.h>

int main() {
    float billAmount, discount = 0, finalAmount;

    // Input total bill
    printf("Enter total bill amount: ");
    scanf("%f", &billAmount);

    // Apply discount conditions
    if (billAmount >= 5000) {
        discount = billAmount * 0.20;   
    }
    else if (billAmount >= 3000) {
        discount = billAmount * 0.10;   
    }
    else {
        discount = 0;   
    }

    finalAmount = billAmount - discount;

    printf("\nOriginal Bill: %.2f", billAmount);
    printf("\nDiscount: %.2f", discount);
    printf("\nFinal Payable Amount: %.2f\n", finalAmount);

    return 0;
}
