#include <stdio.h>

char* find_winner(int n) {
    if (n == 1) {
        return "Vali";
    }

    if (n % 2 == 0) {
        return "Vali";
    }

    return "Ali";
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char* winner = find_winner(n);
        printf("%s\n", winner);
    }

    return 0;
}
