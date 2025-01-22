#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int mod_exp(int base, int exp, int n) {
    unsigned int pow = 1;
    for (unsigned int i = 0; i < exp; i++) {
        pow = (pow * base) % n;
    }
    return pow;
}

int gcd(int m, int n) {
    while (m != n) {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return m;
}

int main() {
    int p = 47, q = 71;
    int n = p * q;
    int z = (p - 1) * (q - 1);
    int e = z - 1;
    int d = 1;

    char in[20];
    unsigned int out[20] = {0}, decr[20];

    while (gcd(e, z) != 1) {
        e--;
    }

    while ((e * d) % z != 1) {
        d++;
    }

    printf("\nEnter the input string:\n");
    scanf("%s", in);

    printf("\nThe entered string is: %s\n", in);

    printf("The encrypted string is:\n");
    for (int i = 0; i < strlen(in); i++) {
        out[i] = mod_exp(in[i], e, n);
        printf("%c = %u\n", in[i], out[i]);
    }

    printf("\nDecrypted string is: ");
    for (int i = 0; i < strlen(in); i++) {
        decr[i] = mod_exp(out[i], d, n);
        printf("%c", (char)decr[i]);
    }

    printf("\n");
    return 0;
}
