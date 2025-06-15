#include <stdio.h>

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        int even = 0, odd = 0, cnt = 0, x;
        char c;
        while(1){
            scanf("%d%c",&x,&c);
            if(x%2==0) even++;
            else odd++;
            cnt++;
            if(c=='\n') break;
        }
        if(cnt%2==0 && even>odd || cnt%2==1 && odd>even) printf("YES\n");
        else printf("NO\n");
    }
}