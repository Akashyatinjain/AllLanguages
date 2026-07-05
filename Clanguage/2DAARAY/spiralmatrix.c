#include <stdio.h>

#define ROW 3
#define COL 3

void spiralTraversal(int m, int n, int matrix[ROW][COL]) {
    int i, k = 0, l = 0;
    
    while (k < m && l < n) {
        // Print the first row from the remaining rows
        for (i = l; i < n; ++i) {
            printf("%d ", matrix[k][i]);
        }
        k++;
        
        // Print the last column from the remaining columns
        for (i = k; i < m; ++i) {
            printf("%d ", matrix[i][n - 1]);
        }
        n--;
        
        // Print the last row from the remaining rows
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", matrix[m - 1][i]);
            }
            m--;
        }
        
        // Print the first column from the remaining columns
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int matrix[ROW][COL] = { { 1, 2, 3 },
                             { 6, 4, 6 },
                             { 8, 7, 9 } };
    
    spiralTraversal(ROW, COL, matrix);
    
    return 0;
}
