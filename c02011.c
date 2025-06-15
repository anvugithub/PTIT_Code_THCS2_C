#include <stdio.h>

/*
r = 4; c = 4:
	1234 - i = 1
	2343 - i = 2
	3432 - i = 3
	4321 - i = 4
	
r = 5; c = 3:
    123
    232
    321 
    432 
    543
*/

int main(){
	int r,c; scanf("%d %d",&r,&c);
	
	for(int i = 1; i <= r; i++){
		if(i == 1){
			for(int k = 1; k <= c; k++) printf("%d",k);
			printf("\n");
		}
		else if(i <= c){
			for(int l = i; l <= c; l++) printf("%d",l);
			for(int m = c - 1; m >= c - i + 1; m--) printf("%d",m);
			printf("\n");
			}
		else{
		    for(int n = i; n >= i - c + 1; n--) printf("%d",n);
		    printf("\n");
		}
		}
}