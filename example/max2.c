#include <stdio.h>

int main() {
    int max, min;

    scanf("%d %d", &max, &min);

    if ( max < min ) {
        max = min;
    }

    printf("%d\n", max);

    return 0;
}
