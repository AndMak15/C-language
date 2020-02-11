
int reverse(int x) {
    int revert = 0;

    while ( x != 0 ) {
        int pop = x % 10;

        x /= 10;
        if ( revert > INT_MAX / 10 || ( revert == INT_MAX / 10 && pop > 7 ) ) {
            return 0;
        }
        if ( revert < INT_MIN / 10 || ( revert == INT_MIN / 10 && pop < -8 ) ) {
            return 0;
        }
        revert = revert * 10 + pop;
    }

    return revert;
}
