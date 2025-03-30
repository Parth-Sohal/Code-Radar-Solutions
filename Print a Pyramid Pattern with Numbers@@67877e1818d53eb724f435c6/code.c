#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print increasing numbers
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
