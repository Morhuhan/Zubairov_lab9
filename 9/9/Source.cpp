#include <stdio.h>

void main(void) {

    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, -8, 0} };
    int min = array[0][0];
    int index_of_min = 0;
    int sum = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (array[i][j] < min) {
                min = array[i][j];
                index_of_min = i;
            }
        }
    }

    for (int j = 0; j < 3; j++) {

        int i = index_of_min;
        sum = sum + array[i][j];
    }

    printf("Answer is: %d", sum);
}
