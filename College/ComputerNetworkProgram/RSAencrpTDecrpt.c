#include <stdio.h>

long long power(long long a, long long b, long long n) {
    long long res = 1;
    for(int i = 0; i < b; i++)
        res = (res * a) % n;
    return res;
}

int main() {
    long long p = 3, q = 11;
    long long n = p * q; // 33
    long long phi = (p - 1) * (q - 1); // 20
    long long e = 7; // public key
    long long d = 3; // private key

    long long msg;
    printf("Enter message (as integer < %lld): ", n);
    scanf("%lld", &msg);

    long long enc = power(msg, e, n);
    printf("Encrypted: %lld\n", enc);

    long long dec = power(enc, d, n);
    printf("Decrypted: %lld\n", dec);

    return 0;
}
