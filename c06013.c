#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[1001];
        scanf("%s",n);

        int valid = 1;
        int soXuatHien[10] = {0};

        if(n[0]=='0'){
            valid = 0;
        }
        else{
            int len = strlen(n);
            for(int i = 0; i < len; i++){
                if(!isdigit(n[i])){
                    valid = 0;
                    break;
                }
                else{
                    char digit = n[i] - '0';
                    soXuatHien[digit] = 1;
                }
            }
        }


        if(valid){
            int laSoDayDu = 1;
            for(int i = 0; i < 10; i++){
                if(soXuatHien[i] == 0){
                    laSoDayDu = 0;
                    break;
                }
            }
            if(laSoDayDu){
                printf("YES\n");
            }
            else printf("NO\n");
        }
        else{
            printf("INVALID\n");
        }

    }

}
