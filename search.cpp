#include "search.h"
#include <algorithm>

namespace search
{
        int linearSearch(const std::vector<int>& nums, int target)
	{
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i] == target)
			{
				return i;
			}
		}
		return -1;
	}
	int findFirst(const std::vector<int>& nums, int target)
	{
		auto iter = std::lower_bound(nums.begin(), nums.end(), target);
		if(iter != nums.end() && *iter == target)
		{
			return iter - nums.begin();
		}
		return -1;
	}
        int countOccurences(std::vector<int>& nums, int target)
        {
		std::sort(nums.begin(), nums.end());

		auto lower = std::lower_bound(nums.begin(), nums.end(), target);
		auto upper = std::upper_bound(nums.begin(), nums.end(), target);
		return upper - lower;
        }


}
