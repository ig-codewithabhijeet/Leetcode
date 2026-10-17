#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> last(26, -1);
        for (int i = 0; i < s.size(); i++)
        {
            last[s[i] - 'a'] = i;
        }

        vector<int> res;
        int start = 0;
        int end = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int l = last[s[i] - 'a'];
            end = max(end, l);

            if (i == end)
            {
                res.push_back(end - start + 1);
                start = i + 1;
                end = i + 1;
            }
        }
        return res;
    }
};