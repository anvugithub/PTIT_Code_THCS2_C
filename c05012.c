#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int cc = 1; cc <= t; cc++){
        int n; scanf("%d",&n);
        int a[n][n],r[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j <= i) a[i][j] = j + 1; // tam giác dưới
                else a[i][j] = 0; 
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                r[i][j] = 0;
                for(int k = 0; k < n; k++) r[i][j] += a[i][k]*a[j][k];
            }
        }

    printf("Test %d:\n",cc);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) printf("%d ",r[i][j]);
        printf("\n");
    }

    }
}