#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    int sign = 1;
    if (x == 1 || (x % 2 == 0 && x != 2)) {
        sign = 0;
    }
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) {
            sign = 0;
            break;
        }
    }
    return sign;
}

int main() {
    int m, n, sum = 0, cnt = 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++) {
        if (isPrime(i) == 1) {
            sum += i;
            cnt++;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}
