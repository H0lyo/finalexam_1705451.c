#include <stdio.h>

int sum_of_digits(int id) {
    int sum = 0;
    while (id > 0) {
        sum += id % 10;
        id /= 10;
    }
    return sum;
}

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

int main() {
    int student_id;
    printf("Input your Student ID: ");
    scanf("%d", &student_id);

    int sum = sum_of_digits(student_id);
    int U = (sum % 5) + 3;

    printf("Calculated U = %d\n", U);
    
    print_fibonacci(21);

    return 0;
}
