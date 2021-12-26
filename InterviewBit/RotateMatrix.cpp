#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void rotate(vector<vector<int>> &A)
{

    int N = A.size();
    if (N <= 1)
    {
        return;
    }

    for (int i = 0; i < N; i++)
    {
        reverse(A[i].begin(), A[i].end());
    }

    // traversing diagonally (right-downwards) ans reversing all diagnols

    for (int diff = 0; diff < N; diff++)
    {
        int r1 = 0, c2 = N - 1, r2 = N - 1 - diff, c1 = diff;

        while (r1 <= r2)
        {
            swap(A[r1++][c1++], A[r2--][c2--]);
        }
    }

    for (int diff = 1; diff < N; diff++)
    {
        int r1 = diff, c2 = N - 1 - diff, r2 = N - 1, c1 = 0;

        while (r1 <= r2)
        {
            swap(A[r1++][c1++], A[r2--][c2--]);
        }
    }
}

int main()
{

    return 0;
}