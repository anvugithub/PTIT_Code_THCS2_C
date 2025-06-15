#include <stdio.h>
#include <string.h>

void reverse(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
}

// Quy ước: a có nhiều số chữ số hơn (hoặc bằng) b.
void add(char n1[], char n2[]){
    int len1 = strlen(n1), len2 = strlen(n2);
    int x[len1], y[len1], r[len1 + 1];

    for(int i = 0; i < len1; i++) x[i] = n1[i] - '0';
    for(int i = 0; i < len2; i++) y[i] = n2[i] - '0';

    reverse(x,len1); reverse(y,len2);

    // Điền số 0 vào phần đầu số có ít chữ số hơn (vì đã đảo ngược nên giờ điền vào phần sau của mảng)
    // Theo quy ước, n2 (có thể) là số ít chữ số hơn, vì vậy:
    for(int i = len2; i < len1; i++) y[i] = 0;

    int carry = 0, n = 0;
    for(int i = 0; i < len1; i++){
        int tmp = x[i] + y[i] + carry;
        r[n++] = tmp%10;
        carry = tmp/10;
    }
    if(carry) r[n++] = carry;
    for(int i = n - 1; i >= 0; i--) printf("%d",r[i]);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n1[501], n2[501];
        scanf("%s %s",n1,n2);
        if(strlen(n1) >= strlen(n2)) add(n1,n2);
        else add(n2,n1);
        printf("\n");
    }
}
