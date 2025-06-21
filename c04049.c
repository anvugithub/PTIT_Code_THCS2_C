/*
Tóm tắt đề bài (XÂY DỰNG DÃY SỐ):
    Cho a[n], cần xây dựng b[n + 1] sao cho:
    gcd(b[i], b[i+1]) = a[i] với 1 ≤ i ≤ n (hay mỗi phần tử trong a là ước chung lớn nhất của hai số liên tiếp trong b)
    và tổng các phần tử trong b là nhỏ nhất.

Ý tưởng:
    Để gcd(b[i], b[i + 1]) = a[i] thì cả hai số phải chia hết cho a[i],
    nhưng b[i] và b[i + 1] phải thỏa mãn rằng tổng của chúng phải nhỏ nhất.
    Nghĩ tới việc tìm số nhỏ nhất chia hết cho cả hai: lcm(a[i - 1], a[i]).
    Nếu gán hai biên là a[0] và a[n - 1], còn các số giữa là BCNN vậy thì:
    - Các cặp b[i], b[i + 1] luôn chia hết cho a[i]
    - GCD đúng bằng a[i]
    - Tổng các phần tử trong b là nhỏ nhất (lcm là số nhỏ nhất chia hết cho cả hai)
*/

#include <stdio.h>

int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n], b[n+1];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        b[0] = a[0]; b[n] = a[n - 1]; // gán hai biên như trên
        // Các phần tử giữa:
        for(int i = 1; i < n; i++){
            int g = gcd(a[i-1],a[i]);
            b[i] = a[i-1]*a[i]/g; // LCM
        }
        for(int i = 0; i <= n; i++) printf("%d ",b[i]);
        printf("\n");
    }
}
