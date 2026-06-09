#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    
    int **seat = (int**)malloc(n * sizeof(int*));//n jetli row
    for(int i = 0; i < n; i++) {
        seat[i] = (int*)calloc(m, sizeof(int)); //m jetli column
    }

    while(k--) {
        int x, y;
        scanf("%d %d", &x, &y);

        x--; 
        y--;   

        if(seat[x][y] == 0) {
            seat[x][y] = 1;
            printf("%d %d\n", x+1, y+1);
        }
        else {
            int minDist = 1000000000;
            int ansX = -1, ansY = -1;

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(seat[i][j] == 0) {
                        int dist = abs(x - i) + abs(y - j);

                        if(dist < minDist) {
                            minDist = dist;
                            ansX = i;
                            ansY = j;
                        }
                    }
                }
            }

            if(ansX != -1) {
                seat[ansX][ansY] = 1;
                printf("%d %d\n", ansX+1, ansY+1);
            }
        }
    }

    
    for(int i = 0; i < n; i++) {
        free(seat[i]);
    }
    free(seat);

    return 0;
}
