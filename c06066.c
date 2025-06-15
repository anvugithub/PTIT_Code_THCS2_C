#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char kq[202];

void reverse(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
}

void add(char n1[], char n2[]){
    int len1 = strlen(n1), len2 = strlen(n2);
    
    int x[len1], y[len1], r[len1 + 1];

    for(int i = 0; i < len1; i++) x[i] = n1[i] - '0';
    for(int i = 0; i < len2; i++) y[i] = n2[i] - '0';

    reverse(x,len1); reverse(y,len2);

    for(int i = len2; i < len1; i++) y[i] = 0;

    int carry = 0, n = 0;
    for(int i = 0; i < len1; i++){
        int tmp = x[i] + y[i] + carry;
        r[n++] = tmp%10;
        carry = tmp/10;
    }
    if(carry) r[n++] = carry;
    
    
    for(int i = 0; i < n; i++) kq[i] = r[n - 1 - i] + '0'; // + '0' để chuyển số thành ký tự số (trong chuỗi)
    kq[n] = '\0';
    
}

void TachDoiTinhTong(char a[]){
    char nuadau[101], nuasau[101];
    while(strlen(a) > 1){
        int len = strlen(a), half = len/2;
        
        strncpy(nuadau,a,half); nuadau[half] = '\0';
        strcpy(nuasau,a + half);
        
        if(strlen(nuadau) >= strlen(nuasau)) add(nuadau,nuasau);
        else add(nuasau,nuadau);
        printf("%s\n",kq);

        strcpy(a,kq); // chép lại kq vào a để lặp lại
    }
}

int main(){
    char n[201]; scanf("%s",n);
    TachDoiTinhTong(n);
}
