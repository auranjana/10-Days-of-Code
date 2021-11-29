#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 

int main()
{
    int N;
    printf("Enter N:");
    scanf("%d", &N);
    int len = N*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", N-min);
    int n, i, j, t;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    t = 2 * n - 1;
    i = t;
    j = t;

    int a[i][j], k, m, p;
    p = n;
    m = 0;

    for (k = 0; k < p; k++) {
        for (i = m; i < t; i++) {
            for (j = m; j < t; j++) {
                if (i == m || i == (t - 1) || j == m || j == (t - 1)) {
                    a[i][j] = n;
                    if (n == 1) {
                        break;
                    }
                }
            }
        }
        t = t - 1;
        n = n - 1;
        m = m + 1;
    }
    t = 2 * m - 1;
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
