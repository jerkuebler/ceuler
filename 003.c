#include <math.h>
#include <stdio.h>

int prime(int num) {
    int j;
    int max_factor = (int) pow(num, 0.5);
    for (j = 2; j < max_factor; j++){
        if (num % j == 0){
            return 1;
        }
    }
    return 0;
}

int main() {

    int max_prime = 0;
    long long int factorize = 600851475143;
    int max_factor = (int) pow(factorize, 0.5);
    int i;
    for (i = 2; i < max_factor; i++) {
        if (prime(i) == 0 && factorize % i == 0) {
                max_prime = i;
        }
    }
    printf("%d", max_prime);
    return 0;
}
