/*
两数之和hash
给定一个数组和一个目标值target，返回数组下标
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twosum(vector<int>& nums, int target)
{
	int n = nums.size();
	unordered_map<int,int> dic;
	for (int i = 0; i < n; i++)
	{
		if (dic.find(target - nums[i]) != dic.end())
		{
			return { dic[target - nums[i]], i };
		}
		dic.emplace(nums[i], i);
	}
	return {};
}

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		printf("%d ", (*it));
	}
}

int main()
{
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);

	int target = 6;

	vector<int> res = twosum(nums, target);

	printvector(res);
}