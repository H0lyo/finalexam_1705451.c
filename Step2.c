#include <stdio.h>

int sum_of_digits(int id) {
    int sum = 0;
    while (id > 0) {
        sum += id % 10;
        id /= 10;
    }
    return sum;
}

void print_triangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print numbers in each row
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
}

int main() {
    int student_id;
    printf("Enter your Student ID: ");
    scanf("%d", &student_id);

    int sum = sum_of_digits(student_id);
    int U = (sum % 5) + 3;

    printf("Calculated U = %d\n", U);
    
    print_triangle(U);

    return 0;
}
