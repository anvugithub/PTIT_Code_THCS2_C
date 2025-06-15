#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int n; scanf("%d",&n);
        printf("Test %d: ",i);
        for(int j = 2; j*j <= n; j++){
            int times = 0;
            while(n%j==0){
                times+=1;
                n/=j;
            }
            if(times > 0) printf("%d(%d) ",j,times);
        }
        if(n > 1) printf("%d(1)",n);
        printf("\n");
    }
}
