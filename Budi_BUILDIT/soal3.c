#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(long long N) {
    // Angka 1 bukan bilangan prima
    if (N <= 1) return false;
    
    // Angka 2 dan 3 adalah bilangan prima
    if (N == 2 || N == 3) return true;
    
    // Bilangan genap atau kelipatan 3 bukan bilangan prima
    if (N % 2 == 0 || N % 3 == 0) return false;

    // Cek bilangan ganjil dari 5 hingga akar kuadrat N
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
