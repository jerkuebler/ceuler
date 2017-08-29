#include "stdio.h"

int main(){

    int fib_minus_one = 1;
    int fib_minus_two = 0;
    int sum = 0;

    while (fib_minus_one < 4000000) {
        int new_fib = fib_minus_one + fib_minus_two;
        fib_minus_two = fib_minus_one;
        fib_minus_one = new_fib;
        if (new_fib % 2 == 0) {
            sum = sum + new_fib;
        }
    }
    printf("%d", sum);
    return 0;

}