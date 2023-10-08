#include <stdio.h>

int main() {
    float grade;

    printf("Enter the numerical grade: ");
    scanf("%f", &grade);

    if (grade >= 90) {
        printf("The corresponding letter grade is A.\n");
    } else if (grade >= 80) {
        printf("The corresponding letter grade is B.\n");
    } else if (grade >= 70) {
        printf("The corresponding letter grade is C.\n");
    } else if (grade >= 60) {
        printf("The corresponding letter grade is D.\n");
    } else {
        printf("The corresponding letter grade is F.\n");
    }

return 0;
}