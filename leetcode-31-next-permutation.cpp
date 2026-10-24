#include <vector>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int pivot = n - 2;

        // find pivot, where digit value decreased
        while (pivot >= 0 && nums[pivot] >= nums[pivot + 1])
        {
            pivot--;
        }

        // swap pivot with immediate bigger digit
        if (pivot >= 0)
        {
            int j = n - 1;
            while (nums[j] <= nums[pivot])
            {
                j--;
            }
            swap(nums[pivot], nums[j]);
        }

        // reverse the elements on right side of pivot position
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};