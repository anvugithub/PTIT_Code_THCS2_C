#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int isAllDigitsandSumPrime(int n){
    int sum = 0;
    while(n!=0){
        int d = n % 10; n/=10; sum += d;
        if(d != 2 && d != 3 && d != 5 && d != 7) return 0;
    }
    return (isPrime(sum));
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b, count = 0;
        scanf("%d %d",&a,&b);
        for(int i = a; i <= b; i++){
            if(isAllDigitsandSumPrime(i) && isPrime(i)) count++;
        }
        printf("%d\n",count);
    }

}