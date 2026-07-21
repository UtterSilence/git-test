#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

// 简单的测试：计算整数之和
int sum(const std::vector<int> &nums)
{
    int total = 0;
    for (int n : nums)
    {
        total += n;
    }
    return total;
}

// 测试：检查向量是否已排序
bool is_sorted(const std::vector<int> &nums)
{
    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i - 1] > nums[i])
            return false;
    }
    return true;
}

int main()
{
    // 测试 sum
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    assert(sum(v1) == 15);
    std::cout << "✓ sum test passed\n";

    // 测试 is_sorted
    std::vector<int> v2 = {1, 3, 5, 7, 9};
    assert(is_sorted(v2) == true);
    std::cout << "✓ is_sorted test (sorted) passed\n";

    std::vector<int> v3 = {3, 1, 4, 1, 5};
    assert(is_sorted(v3) == false);
    std::cout << "✓ is_sorted test (unsorted) passed\n";

    // 测试 std::sort
    std::vector<int> v4 = {9, 3, 7, 1, 5};
    std::sort(v4.begin(), v4.end());
    assert(is_sorted(v4) == true);
    std::cout << "✓ sort test passed\n";

    std::cout << "\n所有测试通过!\n";
    return 0;
}
