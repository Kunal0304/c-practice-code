#include <stdio.h>
void main() {
    int n, re = 0, r, num;
    printf("Enter an integer -: ");
    scanf("%d", &n);
    num = n;

    while (n != 0) {
        r = n % 10;
        re = re * 10 + r;
        n=n/10;
    }

    if (num == re)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

}