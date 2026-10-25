#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int large = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > large)
        {
            large = nums[i];
        }
    }
    int secondLarge = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < large && nums[i] > secondLarge)
        {
            secondLarge = nums[i];
        }
    }
    if (secondLarge == INT_MIN)
    {
        return -1;
    }
    cout << secondLarge << endl;
}