#import <stdio.h>

int palindrome(int num) {

    int original_num = num;
    int new_num = 0;

    while (num > 0) {
        int i;

        new_num *= 10;
        i = num % 10;
        new_num += i;
        num = num / 10;
    }
    if (new_num == original_num){
        return 0;
    }
    return 1;
}

int main() {

    int largest = 0;
    int i;
    int j;
    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++){
            int test_num = i * j;
            if (palindrome(test_num) == 0 && test_num > largest){
                largest = test_num;
            }
        }
    }
    printf("%d", largest);
    return 0;
}

