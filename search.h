#pragma once
#ifndef PAYE_SEARCH_H
#define PAYE_SEARCH_H

#include <vector>

namespace search
{
	int linearSearch(const std::vector<int>& nums, int target);
	int findFirst(const std::vector<int>& nums, int target);
	int countOccurences(std::vector<int>& nums, int target);
}

#endif
