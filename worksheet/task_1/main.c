#include <stdio.h>

int main(void) {
    // Given values for submission
    float salary = 36250.0f;
    float niRate = 8.0f;
    float taxRate = 15.0f;

    // National Insurance is deducted from the total salary
    float niContribution = salary * (niRate / 100.0f);

    // Tax is applied after NI deduction, only to the amount over £12500
    float salaryAfterNI = salary - niContribution;
    float taxableAmount = salaryAfterNI - 12500.0f;

    if (taxableAmount < 0.0f) {
        taxableAmount = 0.0f;
    }

    float taxContribution = taxableAmount * (taxRate / 100.0f);

    // Final take-home salary
    float takeHomeSalary = salaryAfterNI - taxContribution;

    printf("NI contribution: %.2f\n", niContribution);
    printf("Tax contribution: %.2f\n", taxContribution);
    printf("Take-home salary: %.2f\n", takeHomeSalary);

    return 0;
}