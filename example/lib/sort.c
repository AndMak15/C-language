/*
 Classic bubble sort
*/
void bubbleSort(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        int limit = last - i;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int temp = array[j];

                array[j] = array[next];
                array[next] = temp;
            }
        }
    }
}

/*
Optimisation bubble sort
*/
void bubbleSortOp(int array[], int size) {
    int last = size - 1;
    int isSorted = 0;

    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;

        isSorted = 1;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int temp = array[j];

                array[j] = array[next];
                array[next] = temp;
                isSorted = 0;
            }
        }
    }
}

/*
 Classic insert sort
*/
void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        for ( int j = i, prev = j - 1; j > 0 && array[j] < array[prev]; j--, prev-- ) {
            int temp = array[j];

            array[j] = array[prev];
            array[prev] = temp;
        }
    }
}

/*
 Optimisation insert sort
*/
void insertSortOp(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        int temp = array[i];

        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}

/*
 Classic select sort
*/
void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[i] ) {
                int temp = array[i];

                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

/*
 Optimisation select sort
*/
void selectSortOp(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }

        if ( min != i ) {
            int temp = array[i];

            array[i] = array[min];
            array[min] = temp;
        }
    }
}