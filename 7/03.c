#include <stdio.h>

int is_divisor(int, int);
int count_divisors(int);
int is_prime(int);
void print_divisors(int);

int main(void) {
    int n, count;

    printf("정수 입력: ");
    scanf("%d", &n);

    printf("%d의 약수: ", n);
    print_divisors(n);
    printf("\n");

    count = count_divisors(n);
    printf("약수의 개수: %d\n", count);

    if (is_prime(n) == 1) {
        printf("%d은 소수입니다.\n", n);
    } else {
        printf("%d은 소수가 아닙니다.\n", n);
    }

    return 0;
}

int is_divisor(int n, int d) {
    if (n%d == 0) {
        return 1;
    } else {
        return 0;
    }
}

int count_divisors(int n) {
    int d;
    int count = 0;

    for (d=1; d <= n;d++) {
        if (is_divisor(n, d) == 1) {
            count++;
        }
    }

    return count;
}

int is_prime(int n) {
    if (count_divisors(n) == 2) {
        return 1;
    } else {
        return 0;
    }
}

void print_divisors(int n) {
    int d;

    for (d = 1; d <= n; d++) {
        if (is_divisor(n, d) == 1) {
            printf("%d ", d);
        }
    }
}
