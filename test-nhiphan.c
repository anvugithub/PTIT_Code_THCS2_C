#include <stdio.h>


int main(){
	/*
	Y tuong: chay vong lap chia lien tiep a cho 2, luu phan du vao mang. Sau do in nguoc mang ra.
	*/
	int a; scanf("%d",&a);
	int b[10], i = 0;
	if(a == 0) printf("0");
	while(a > 0){
		b[i++] = a % 2;
		a /= 2;
	}
	for(int j = i - 1; j >= 0; j--) printf("%d",b[j]);
}
