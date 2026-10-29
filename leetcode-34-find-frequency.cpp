#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0, r = n - 1;
        int first = -1;
        int last = -1;

        // binary search: iteration 1: first index
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                first = mid;
                r = mid - 1;
            }
        }
        l = 0;
        r = n - 1;

        // binary search: iteration 2: last index
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                last = mid;
                l = mid + 1;
            }
        }

        return {first, last};

        // frequency = (last-first)+1
    }
};