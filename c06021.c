#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[1001]; scanf("%s",n);
        int odd = 0, even = 0, valid = 1;

        int len = strlen(n);
        for(int i = 0; i < len; i++){
            if(!isdigit(n[i])){
                valid = 0;
                break;
            }


            int digit = n[i] - '0';
            if(digit%2==0){
                even++;
            }
            else odd++;
        }


        if(!valid){
            printf("INVALID\n");
        }
        else{
        if( (even > odd && len%2 == 0) || (odd > even && len%2 != 0) ){
            printf("YES\n");
        }
        else printf("NO\n");
        }

    }
}