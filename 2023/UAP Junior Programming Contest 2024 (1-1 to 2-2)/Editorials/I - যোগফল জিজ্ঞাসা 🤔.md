# I - যোগফল জিজ্ঞাসা 🤔 - Editorial

**Problem Origin:** [**CSES 1646 - Static Range Sum Queries**](https://cses.fi/problemset/task/1646)

## Approach Explanation
In this problem we need to find the sum in an array from a-th to b-th elements. But we need to find the sum for each query. If we find the sum by traversing the array from a-th to b-th element for each & every query we will get time limit excided. So we can't use conventional way to find the sum in array from a-th to b-th element.   
After taking input of the array of n integers we will make a prefix sum array so that we can find the sum in O(1) for each query.


## Code Explanation (C)

## Code Explanation (C++)


## Time Complexity Analysis
To make a prefix sum array of n integers the time complexity will be O(n) & to process q number of query the time complexity will be O(q), remember to find the sum for each query will be O(1).  

## Happy Coding! 👋