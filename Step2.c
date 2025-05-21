#include <stdio.h>

// calculate sum of diguts of Student ID
int sum_of_digits(int id) {
    int sum = 0;
    while (id > 0) {
        sum += id % 10;
        id /= 10;
    }
    return sum;
}

// right-aligned triangle
void print_triangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

// square pattern
void print_square(int size) {
    int num = 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

// triangle stars but inverted
void print_inverted_triangle(int rows) {
    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// multiplacation table
void print_multiplication_table(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

// Fibonacci numbers up to U * 3 terms
void print_fibonacci(int terms) {
    int first = 0, second = 1, next;
    printf("First %d Fibonacci numbers:\n", terms);
    
    for (int i = 0; i < terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

// student id
int main() {
    int student_id;
    printf("Enter your Student ID: ");
    scanf("%d", &student_id);

    int sum = sum_of_digits(student_id);
    int U = (sum % 5) + 3;

    printf("Calculated U = %d\n", U);
    
    print_triangle(U);
    print_square(U);
    print_inverted_triangle(U);
    print_multiplication_table(U + 2);
    print_fibonacci(U * 3);

    return 0;
}
