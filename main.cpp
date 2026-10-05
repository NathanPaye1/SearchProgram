#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "search.h"

int main()
{
	std::vector<int> nums { 23,5,66,54,321,34,67,1,1,1,1,1,1,1,1,1,1,1,23,4,5,7,7,7,55,54,321,9,22,2,2,2,3,3,3,4,4,4,4,4,4,5,5,6,6,6,6,6,66,66,7,7,7,7,8,8,8,8,8,8,8,8,9,9,9,9,9,0,0,0,11,11,12,13,21,4};

	std::cout << "Search Program\n\n";
	std::cout << "Original Vector: ";

	for(int i : nums){std::cout << i << " ";}
	std::cout << "\n\n";

	int target;
	std::cout << "Enter a number to search for: ";
	std::cin >> target;
	if(std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000000, '\n');
		std::cout << "Bum\n\n";
		return 0;
	}
	//linear search
	int linearIndex = search::linearSearch(nums, target);

	if(linearIndex != -1)
	{
		std::cout << "Linear Search: found " << target << " at index " << linearIndex << "\n";
	}
	else
	{
		std::cout << "Linear Search: " << target << " Not Found\n";
	}

	//binary search

	std::sort(nums.begin(), nums.end());
	std::cout << "\nSorted Vector: ";

        for(int i : nums){std::cout << i << " ";}
        std::cout << "\n\n";

	bool found = std::binary_search(nums.begin(), nums.end(), target);
	std::cout << "Binary search: ";
	if(found)
	{
		std::cout << "Found\n\n";
	}
	else
	{
		std::cout << "Not Found\n\n";
	}

	//find first
	int first = search::findFirst(nums, target);
	if(first != -1)
	{
		std::cout << "First Occurence of " << target << " at position " << (first + 1) << "\n";
	}

	//count
	int count = search::countOccurences(nums,target);
	if(count > 0)
	{
		std::cout << target << " appears " << count << " time(s)\n\n";
	}
	else
	{
		std::cout << target << " does not appear in the vector\n\n";
	}

	//accumulate
	int sum = std::accumulate(nums.begin(), nums.end(), 0);
	std::cout << "Total: " << sum << "\n\n";

	//minmax
	auto minIt = std::min_element(nums.begin(), nums.end());
	auto maxIt = std::max_element(nums.begin(), nums.end());

	if(minIt != nums.end() && maxIt != nums.end());
	{
		std::cout << "Minimum = " << *minIt << "\nMaximun = " << *maxIt << "\n\n";
	}

	//numbers greater
	int greaterThanTarget = std::count_if(nums.begin(), nums.end(), [target](int n)
		{
			return n > target;
		});
	std::cout << "Numbers greater than " << target << " = " << greaterThanTarget << "\n\n";

	return 0;
}























