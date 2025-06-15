#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    for(int i = 0; i < n; i++){
        int x = a[i], j = i - 1;
        while(j >= 0 && a[j] > x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
        printf("Buoc %d:",i);
        for(int k = 0; k <= i; k++) printf(" %d",a[k]);
        printf("\n"); 
    }
}
