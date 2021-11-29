#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a[100][100],i,j,f=0,s=0,dif;
    printf("enter the order of a matrix:\n");
    scanf("%d",&n);
    printf("enter the elements of a matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            f=f+a[i][j];
            if(i==(n-j-1))
            s=s+a[i][j];
        }
    }
    dif=abs(f-s);
    printf("%d",dif);
    return 0;
}
