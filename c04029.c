#include <stdio.h>

void bubbleSort(int a[], int n){
	int tmp;
    // Sau mỗi lượt, có 1 phần tử được sắp xếp đúng đẩy về cuối dãy
    // Vì vậy, chỉ cần chạy n - 1 lần, phần tử cuối cùng sẽ tự ở vị trí đúng.
	for(int i = 0; i < n - 1; i++){
		int swapped = 0;
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swapped = 1;
			}
		}
		if(swapped){
			printf("Buoc %d:",i + 1);
			for(int k = 0; k < n; k++) printf(" %d",a[k]);
		}
		else break;

		printf("\n");
	}
}

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
	
	bubbleSort(a,n);
}
