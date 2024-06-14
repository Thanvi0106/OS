#include <stdio.h>

int main() {
    int i, j, n, b[20], sb[20], x, c[20][20], t[20];
    printf("Enter number of files: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter number of blocks occupied by file %d: ", i + 1);
        scanf("%d", &b[i]);
        printf("Enter starting block for file %d: ", i + 1);
        scanf("%d", &sb[i]);
        t[i] = sb[i];
        for (j = 0; j < b[i]; j++) {
            c[i][j] = sb[i] + j;
        }
    }

    printf("\nFilename\tStart block\tLength\n");
    for (i = 0; i < n; i++)
        printf("%d\t\t%d\t\t%d\n", i + 1, t[i], b[i]);

    printf("\nEnter file name: ");
    scanf("%d", &x);
    printf("\nFile name is %d\n", x);
    printf("Length is %d\n", b[x - 1]);
    printf("Blocks occupied: ");
    for (i = 0; i < b[x - 1]; i++)
        printf("%4d", c[x - 1][i]);
    
    return 0;
}
