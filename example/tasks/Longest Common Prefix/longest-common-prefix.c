
char * longestCommonPrefix(char ** strs, int strsSize) {
    int maxPrefix;

    if ( strsSize == 0 ) {
        return "";
    }

    maxPrefix = strlen(strs[0]);
    for ( int i = 1, countPrefix; i < strsSize; i++ ) {
        countPrefix = 0;

        for ( int j = 0; j < maxPrefix && strs[i][j] != '\0' && strs[i][j] == strs[0][j]; j++ ) {
            countPrefix += 1;
        }
        maxPrefix = countPrefix;
    }
    strs[0][maxPrefix] = '\0';

    return strs[0];
}
