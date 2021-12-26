#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int maximumGap(const vector<int> &A)
{
    int N = A.size();
    vector<int> L(N), R(N);
    L[0] = A[0];
    R[N - 1] = A[N - 1];

    for (int i = 1; i < N; i++)
        L[i] = min(L[i - 1], A[i]);
    for (int i = N - 2; i >= 0; i--)
        R[i] = max(R[i + 1], A[i]);

    int l = 0, r = 0, ans = -1100000;

    while (l < N && r < N)
    {
        if (R[r] >= L[l])
        {
            ans = max(ans, r - l);
            r++;
        }
        else
            l++;
    }

    return ans;
}

int main()
{

    return 0;
}