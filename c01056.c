#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char n[18];
        scanf("%s",n);

        int laSoKhongGiam = 1;

        for (int i = 0; i < strlen(n) - 1; i++){
            if(n[i]>n[i+1]){
                laSoKhongGiam = 0;
                break;
            }
        }
        if (laSoKhongGiam) printf("YES\n"); else printf("NO\n");
    }
}