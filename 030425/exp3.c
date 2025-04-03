//chat gpt soln
// removes d as a globalvariable and adds it as a parameter instead
#include <stdio.h>
int reverse(int k, int d) {
    if (k == 0) return d;
    return reverse(k / 10, d * 10 + k % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    int b = reverse(n, 0);  // Start with d = 0
    printf("%d\n", b);

    int m;
    scanf("%d", &m);
    int c = reverse(m, 0);  // Each call starts fresh
    printf("%d\n", c);

    return 0;
}
