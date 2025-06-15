#include <stdio.h>

void bubbleSort(int a[], int n){
	int tmp;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main(){
    int n; scanf("%d",&n);
    int odd[n], even[n], oddCount = 0, evenCount = 0;

    for(int i = 0; i < n; i++){
        int x; scanf("%d",&x);
        if(x%2==0) even[evenCount++] = x;
        else odd[oddCount++] = x;
    }
    bubbleSort(odd,oddCount);
    bubbleSort(even,evenCount);
    for(int i = 0; i < evenCount; i++) printf("%d ",even[i]);
    for(int i = 0; i < oddCount; i++) printf("%d ",odd[i]);
}
