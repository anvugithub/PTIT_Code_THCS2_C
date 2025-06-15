#include <stdio.h>
#include <string.h>

int isPalindrome(int n){
    int o = n, r = 0;
    while(n!=0){
        r = r*10 + n%10;
        n/=10;
    }
    return (o == r);
}

int containsNine(int n){
    while(n!=0){
        if((n%10)==9) return 1;
        n/=10;
    }
    return 0;
}

int main(){
    int n; scanf("%d",&n);
    int count = 0;
    for(int i = 2; i < n; i++){
        if(isPalindrome(i) && !containsNine(i)){
            printf("%d ",i); count++;
        }
    }
    printf("\n%d",count);
}
