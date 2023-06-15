#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    
    std::vector<int> nums = {1, 3, 5, 6};
    int target;
    std::cout << "What is the target?" << std::endl;
    std::cin >> target;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= target)
        {
            std::cout << i << std::endl;
            break;
        } else if (i == nums.size()-1)
        {
            std::cout << nums.size() << std::endl;
            break;
        }
    }
}