
int romanToInt(char * s) {
    int integer = 0;
    int prev_int = 0;

    for ( int temp, i = strlen(s); i >= 0; i-- ) {
        switch (s[i]) {
            case 'I':
                temp = 1;
                break;
            case 'V':
                temp = 5;
                break;
            case 'X':
                temp = 10;
                break;
            case 'L':
                temp = 50;
                break;
            case 'C':
                temp = 100;
                break;
            case 'D':
                temp = 500;
                break;
            case 'M':
                temp = 1000;
                break;
            default:
                continue;
        }
        if ( prev_int > temp ) {
            integer -= temp;
        } else {
            integer += temp;
        }
        prev_int = temp;
    }

    return integer;
}
