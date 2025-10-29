#include <stdio.h>

#define Rows 3
#define Clms 5

int main() {
    int theatre[Rows][Clms];
    int r, c, num, row, col;

    // initialize seats to 0 (available)
    for (r = 0; r < Rows; r++) {
        for (c = 0; c < Clms; c++) {
            theatre[r][c] = 0;
        }
    }

    printf("\nHow many seats do you want to reserve? ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("\nEnter ROW (0-%d) and COL (0-%d) for seat %d: ", Rows - 1, Clms - 1, i + 1);
        scanf("%d %d", &row, &col);

        if (row >= 0 && row < Rows && col >= 0 && col < Clms) {
            if (theatre[row][col] == 0) {   // ✅ comparison operator
                theatre[row][col] = 1;      // reserve seat
                printf("\nSeat reserved successfully!\n");
            } else {
                printf("\nSorry, seat already reserved!\n");
            }
        } else {
            printf("\nInvalid seat position!\n");
        }
    }

    // print seating chart
    printf("\nTheatre Seating Chart (0 = Available, 1 = Reserved):\n\n");
    for (r = 0; r < Rows; r++) {
        for (c = 0; c < Clms; c++) {
            printf("%d ", theatre[r][c]);
        }
        printf("\n");
    }

    return 0;
}
