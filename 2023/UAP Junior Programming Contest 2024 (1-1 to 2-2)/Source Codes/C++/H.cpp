// H - বাশ বিক্রি 🎍

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j, n, trees[100134], days = -100000;
    cin>>n;
    for(i = 0; i <n; i++){
        cin>>trees[i];
    }
    sort(trees, trees + n, greater<int>());

    j = 1;
    for(i = 0; i < n; i++){
        if(trees[i] + j > days){
            days = trees[i] + j;
        }
        j++;
    }
    days++;

    cout<<days<<endl;
    return 0;
}