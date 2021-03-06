/*
Given an array of integers that is already sorted in ascending order, 
find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. 
Please note that your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution.
Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
Tags: Array Two Pointers, Binary Search
Similar Problems: (M) Two Sum

https://github.com/awangdev/LintCode/blob/master/Java/2%20Sum%20II%20-%20Input%20array%20is%20sorted.java
*/
#include <vector>

struct Result {
    int startIndex;
    int endIndex;
};

Result findSum(const int inputs[], const int size, const int target);

Result findSum(const std::vector<int> inputs, const int target);
