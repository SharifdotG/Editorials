// H - বাশ বিক্রি 🎍

#include<stdio.h>
#include<stdlib.h>

int compare(const void *x, const void *y){
    int a = *(int *)x;
    int b = *(int *)y;
    return b - a;
}

int main() {
    int i, j, n, trees[100134], days = -100000;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &trees[i]);
    }
    qsort(trees, n, sizeof(int), compare);

    j = 1;
    for(i = 0; i < n; i++){
        if(trees[i] + j > days){
            days = trees[i] + j;
        }
        j++;
    }
    days++;

    printf("%d\n", days);
    return 0;
}