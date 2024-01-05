// I - যোগফল জিজ্ঞাসা 🤔

#include<stdio.h>

long long int prefix_sum[230000];
int main(){
    int i, n, q, x, y, array[230000];
    long long int sum;
    scanf("%d %d", &n, &q);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    prefix_sum[0] = array[0];
    for(i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
    }

    while(q--){
        scanf("%d %d", &x, &y);
        sum = prefix_sum[y - 1] - prefix_sum[x - 1 - 1];
        printf("%lld\n", sum);
    }
    return 0;
}