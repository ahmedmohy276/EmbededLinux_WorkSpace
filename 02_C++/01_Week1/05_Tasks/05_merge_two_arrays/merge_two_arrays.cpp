#include <algorithm>
#include <iostream>
#include "merge_two_arrays.hpp"
std::vector<int> merge_two_arr(std::vector<int> v1 ,std::vector<int> v2)
{
    std::vector<int>merged(v1.size() + v2.size());
    std::merge(v1.begin(),v1.end(),v2.begin(),v2.end(),merged.begin());
    return merged;
}