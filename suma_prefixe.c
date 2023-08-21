#include <stdio.h>

int main()
{
    unsigned long long n, s = 0;

    scanf("%llu", &n);
    
    while (n > 0) {
        s += n;
        n /= 10;
    }

    printf("%llu", s);

    return 0;
}
