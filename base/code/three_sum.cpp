#include <iostream>
#include <vector>
#include <algorithm>
#include "three_sum.hpp"
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = i, k = 0; j > k;)
        {
            if (nums[j] + nums[k] == -nums[i])
            {
                result.push_back(vector<int>{nums[i], nums[j], nums[k]});
                break;
            }
            else if (nums[j] + nums[k] > -nums[i])
                j--;
            else
                k++;
        }
    }

    return result;
}

void testThreeSum()
{
    vector<int> src = vector<int>{-2, -1, 0, 1, 2, 3, 4, 5};
    auto data = threeSum(src);
    for_each(data.begin(), data.end(), [](vector<int> a)
             {
                 for_each(a.begin(), a.end(), [](int data)
                          { cout << data << ","; });
                 cout << endl;
             });
}
