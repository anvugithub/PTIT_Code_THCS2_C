#include <stdio.h>

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i; // giả sử rằng vị trí hiện tại chứa phần tử nhỏ nhất
        
        // Duyệt tất cả các phần tử sau, cập nhật chỉ số phần tử nhỏ nhất
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_index]) min_index = j;
        }

        int tmp = a[i];
        a[i] = a[min_index];
        a[min_index] = tmp;

        for(int k = 0; k < n; k++) printf("%d ",a[k]);
        printf("\n");
    }
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    selectionSort(a, n);
}
