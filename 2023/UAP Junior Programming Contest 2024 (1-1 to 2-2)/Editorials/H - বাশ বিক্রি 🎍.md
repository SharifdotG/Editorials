# H - বাশ বিক্রি 🎍- Editorial

**Problem Origin:** [**Kattis - Planting Trees**](https://open.kattis.com/problems/plantingtrees)

## Approach Explanation

In this problem we need to plant the seedlings in such order, so that the party will be as early as possible. We will plant the seedling which takes more time as early as possible. So we can store days for every seedlings to fully grow in an array & sort the array in descending order. Then traversing that sorted array we will find how many days it needs to throw the party. Here we need to remember it takes 1 day to plant one tree seedlings & the pary will happend after the day all the seedlings have grown up.

## Code Implementation & Explanation (C)

```C
// H - বাশ বিক্রি 🎍

#include<stdio.h>
#include<stdlib.h>

//comapre() function for qsort
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

    //sort
    qsort(trees, n, sizeof(int), compare);

    //finding days
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
```

- At first store all the times of a seedlings to grow in an array.
- Then sort the array with [**qsort()**](https://www.youtube.com/watch?v=rHoOWG6Ihs4) library function in descending order.
- Then traversed the sorted array to find the days it requires to throw the party. We can use a counter for each passing day & adding that with each element of the sorted array we can find how many days it needs to grow all the seedlings.
- At last we can increment the day by one beacuse the pary will happend after the day all the seedlings have grown up.

## Code Implementation & Explanation (C++)

```C++
// H - বাশ বিক্রি 🎍

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, trees[100134], days = -100000;
    cin>>n;
    for(i = 0; i <n; i++){
        cin>>trees[i];
    }
    //sort
    sort(trees, trees + n, greater<int>());
    
    //findind days
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
```

- Similar to C we've stored all the times for a seedling to grow up in an array and sorted [(inbuilt sort function)](https://www.geeksforgeeks.org/sort-c-stl/) in descending order.
- Then traversed the sorted array to find the days it requires to throw the party. We can use a counter for each passing day & adding that with each element of the sorted array we can find how many days it needs to grow all the seedlings.
- At last we can increment the day by one beacuse the pary will happend after the day all the seedlings have grown up.

## Time Complexity Analysis

For the Quick Sort algorithm to sort the array the time complexity will be O(nlog(n)) & again to traverse the whole sorted array time complexity will be O(n).  

## Happy Coding! 🎍
