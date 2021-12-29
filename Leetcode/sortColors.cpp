// https://leetcode.com/problems/sort-colors/submissions/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// three pointer approach
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int N = nums.size();
        int mid = 0, low = 0, high = N - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid += 1;
                low += 1;
            }
            else if (nums[mid] == 1)
            {
                mid += 1;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};

int main()
{

    return 0;
}