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

int greater(char n1[], char n2[]){
    int len1 = strlen(n1), len2 = strlen(n2);
    if(len1 != len2) return (len1 > len2) ? 1 : 2; // trả 1 nếu n1 lớn hơn, 2 nếu n2 lớn hơn
    for(int i = 0; i < len1; i++){
        if(n1[i] != n2[i]) return (n1[i] > n2[i]) ? 1 : 2; // nếu n1[i] lớn hơn n2[i] trả 1, không thì trả 2
    }
}

void subtract(char n1[], char n2[]){
    int len1 = strlen(n1), len2 = strlen(n2);
    int x[len1], y[len1], r[len1 + 1];

    for(int i = 0; i < len1; i++) x[i] = n1[i] - '0';
    for(int i = 0; i < len2; i++) y[i] = n2[i] - '0';

    reverse(x,len1); reverse(y,len2);

    for(int i = len2; i < len1; i++) y[i] = 0;

    int carry = 0, n = 0;
    for(int i = 0; i < len1; i++){
        int tmp = x[i] - y[i] - carry;
        if(tmp < 0){
            tmp += 10;
            carry =1;
        }
        else carry = 0;
        r[n++] = tmp;
    }
    if(carry) r[n++] = carry;

    int started = 0;
    for(int i = n - 1; i >= 0; i--){
        if(r[i] != 0) started = 1;
        if(started) printf("%d",r[i]);
    }
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n1[501], n2[501];
        scanf("%s %s",n1,n2);
        if(greater(n1,n2)==1) subtract(n1,n2);
        else subtract(n2,n1);
        printf("\n");
    }
}
