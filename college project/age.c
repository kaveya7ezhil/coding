#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12) {
        printf("You are a child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a teenager.\n");
    } else if (age >= 20 && age <= 59) {
        printf("You are an adult.\n");
    } else if (age >= 60) {
        printf("You are a senior citizen.\n");
    } else {
        printf("Invalid age input.\n");
    }

return 0;
}