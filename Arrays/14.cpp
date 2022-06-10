#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    if (intervals.size() == 0)
    {
        return intervals;
    }
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    int n = intervals.size();
    vector<int> curr = intervals[0];
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= curr[1])
        {
            curr[0] = min(intervals[i][0], curr[0]);
            curr[1] = max(intervals[i][1], curr[1]);
        }
        else
        {
            merged.push_back(curr);
            curr = intervals[i];
        }
    }
    int m = merged.size();
    if (intervals[n - 1][0] < merged[m - 1][1])
    {
        merged[m - 1][0] = min(intervals[n - 1][0], merged[m - 1][0]);
        merged[m - 1][1] = max(intervals[n - 1][1], merged[m - 1][1]);
    }
    else
    {
        merged.push_back(intervals[n - 1]);
    }
    return merged;
}

