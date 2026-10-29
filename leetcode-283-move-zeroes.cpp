#include <vector>
using namespace std;

class Solution
{
public:
    void swap(vector<int> &nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void moveZeroes(vector<int> &nums)
    {
        int position = 0;
        int search = 0;

        while (search < nums.size())
        {
            if (nums[search] != 0)
            {
                swap(nums, position, search);
                position++;
            }
            search++;
        }
    }
};