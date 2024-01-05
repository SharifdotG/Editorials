# I - যোগফল জিজ্ঞাসা 🤔 - Editorial

**Problem Origin:** [**CSES 1646 - Static Range Sum Queries**](https://cses.fi/problemset/task/1646)

## Approach Explanation

In this problem we need to find the sum in an array from a-th to b-th elements. But we need to find the sum for each query. If we find the sum by traversing the array from a-th to b-th element for each & every query we will get time limit excided. So we can't use conventional way to find the sum in array from a-th to b-th element.
After taking input of the array of n integers we will make a prefix sum array so that we can find the sum in O(1) for each query.  
To solve this problem we need to understand the concept of [prefix sum.](https://www.youtube.com/watch?v=PhgtNY_-CiY)

## Code Explanation (C)

```C
// I - যোগফল জিজ্ঞাসা 🤔

#include<stdio.h>

//Global prefix sum array
long long int prefix_sum[230000];

int main(){
    int i, n, q, x, y, array[230000];
    long long int sum;
    scanf("%d %d", &n, &q);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    //making prefix sum
    prefix_sum[0] = array[0];
    for(i = 1; i < n; i++){
        prefix_sum[i] =prefix_sum[i-1] + array[i];
    }

    //processing queries
    while(q--){
        scanf("%d %d", &x, &y);
        sum = prefix_sum[y - 1] - prefix_sum[x - 1 - 1];
        printf("%lld\n", sum);
    }
    return 0;
}
```

- The explanation is very simple, take the array input & make the prefix sum of the array.
- Then find the sum in an array from a-th to b-th elements with the help of the prefix sum. Remember here a & b are 1 based indexing not 0 based indexing.

## Code Explanation (C++)

```C++
// I - যোগফল জিজ্ঞাসা 🤔

#include <bits/stdc++.h>

using namespace std;

//Global prefix sum array
long long int prefix_sum[230000];

int main(){
    int i, n, q, x, y, array[230000];
    long long int sum;
    cin>>n>>q;
    for(i = 0; i < n; i++){
        cin>>array[i];
    }

    //making prefix sum
    prefix_sum[0] = array[0];
    for(i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
    }

    //processing queries
    while(q--){
        scanf("%d %d", &x, &y);
        sum = prefix_sum[y - 1] - prefix_sum[x - 1 - 1];
        cout<<sum<<endl;
    }
    return 0;
}
```

- The explanation is very simple, take the array input & make the prefix sum of the array.
- Then find the sum in an array from a-th to b-th elements with the help of the prefix sum. Remember here a & b are 1 based indexing not 0 based indexing.

## Time Complexity Analysis

To make a prefix sum array of n integers the time complexity will be O(n) & to process q number of query the time complexity will be O(q), remember to find the sum for each query will be O(1).  

## Happy Coding! 🤔
