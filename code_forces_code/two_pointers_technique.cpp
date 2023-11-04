#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    while(left < right) {
        if (nums[left] + nums[right] == target)
            return std::vector<int>({nums[left], nums[right]});
        else if (nums[left] + nums[right] < target)
            left++;
        else
            right--;
    }
    return std::vector<int>();
}

int main() {
    std::vector<int> nums = {1, 3, 4, 8, 9,2,4,7};
    int target = 11;
    std::vector<int> result = twoSum(nums, target);
    std::cout << result[0]  << '\n';
    std::cout << result[1]  << '\n';
    return 0;
}
