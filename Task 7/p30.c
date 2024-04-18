#include <stdio.h>

int main() {
    int SIZE;
    int A[100][100];
    int row, col;
    long det;
    int a, b, c, d, e, f, g, h, i;

    printf("Enter size of matrix (2 or 3): \n");

    scanf("%d", &SIZE);

    printf("Enter elements in matrix: \n");

    for(row=0; row<SIZE; row++) {
        for(col=0; col<SIZE; col++) {
            scanf("%d", &A[row][col]);
        }
    }

    if (SIZE == 2) {
        det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

        printf("Determinant of matrix A = %ld", det);
    }

    else if (SIZE == 3) {
        a = A[0][0];
        b = A[0][1];
        c = A[0][2];
        d = A[1][0];
        e = A[1][1];
        f = A[1][2];
        g = A[2][0];
        h = A[2][1];
        i = A[2][2];

        det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));

        printf("Determinant of matrix A = %ld", det);
    }
    else {
        printf("Option not valid");
    }

    return 0;
}