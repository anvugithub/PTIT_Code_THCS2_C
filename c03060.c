#include <stdio.h>

int main(){
	int n, k; scanf("%d %d",&n,&k);
	
	// Y tuong: so sanh thua so 2 trong n! co lon hon hay bang k hay khong
	
	int count = 0, x = 2;
	while(x <= n){
		count+=n/x;
		x*=2;
	}
	if(count >= k) printf("Yes");
	else printf("No");
}
