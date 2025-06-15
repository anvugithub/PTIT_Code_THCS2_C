#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n; scanf("%d",&n);
    int a[n][n], res = -1, maxCount = -1;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) scanf("%d",&a[i][j]);
    }

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++) if(isPrime(a[i][j])) count++;
        if(count > maxCount){
            maxCount = count;
            res = i;
        }
    }
    printf("%d\n",res+1);
    for(int j = 0; j < n; j++) if(isPrime(a[res][j])) printf("%d ",a[res][j]);
}