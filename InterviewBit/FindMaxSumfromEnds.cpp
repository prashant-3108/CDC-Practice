#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#include <numeric>
int solve(vector<int> &A, int B)
{
    // sum of first B elements
    int maxSum = accumulate(begin(A), begin(A) + B, 0);
    // used to keep current sum
    int curSum = maxSum;
    // last index
    int tail = A.size() - 1;
    /**
       Loop in which we subtract last element from our initial sliding window,
       and we increment last element, we also take maxSum by comparing last maxSum
       and updated curSum, and do the updating of indexes for next calculations
    */
    while (B > 0)
    {
        curSum -= A[--B];
        curSum += A[tail--];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main()
{

    return 0;
}