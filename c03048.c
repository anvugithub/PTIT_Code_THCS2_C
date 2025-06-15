#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t);

    while(t--){
        char n[18]; scanf("%s",n);
        int evenCount = 0, oddCount = 0;

        int len = strlen(n);

        for(int i = 0; i < len; i++){
            if(n[i]%2==0){
                evenCount+=1;
            }
            else{
                oddCount+=1;
            }
        }

        //printf("even%d;odd%d",evenCount,oddCount);

        if(evenCount > oddCount && (n[len - 1] - '0')%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}