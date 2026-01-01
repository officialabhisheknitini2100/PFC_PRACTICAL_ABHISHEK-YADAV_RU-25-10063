#include <stdio.h>
#include <stdlib.h>

// Abhishek Yadav ERP - RU-25-10063

#define DANGER 1
#define SAFE   0

// Function to scan and report danger zones
void scanDangerZones(int **grid, int rows, int cols) {
    int dangerFound = 0;

    printf("\n🔍 Scanning for Danger Zones...\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == DANGER) {
                // Printing position in human-friendly format (1-based index)
                printf("⚠️  Danger Zone detected at Row %d, Column %d\n", i + 1, j + 1);
                dangerFound = 1;
            }
        }
    }

    if (!dangerFound) {
        printf("✅ No Danger Zones detected. Area is safe.\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Dynamic memory allocation for 2D array
    int **grid = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        grid[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("\nEnter grid values (0 = Safe Zone, 1 = Danger Zone):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);

            // Input validation
            if (grid[i][j] != SAFE && grid[i][j] != DANGER) {
                printf("❌ Invalid input! Only 0 or 1 allowed.\n");
                return 1;
            }
        }
    }

    // Function call
    scanDangerZones(grid, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}