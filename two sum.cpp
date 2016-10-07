class Solution {
public:
  
	//思路
	/*
	先遍历一遍容器nums，计算complement=target-nums[i],判断complement在容器map中是否存在，如果有返回complement的下标和i，
	否则把nums[i]添加到容器map中，nums[i]作为map的key，i作为map的value。
	*/
	vector<int> twoSum(vector<int>& nums, int target){
	unsigned int i;
	vector<int> results;
	map<int,int> hmap;
	for (i=0; i < nums.size(); i++)
	{
		int complement = target - nums[i];	
		if (hmap.count(complement)){
         	results.push_back(hmap[complement]);
			results.push_back(i);
			return results;
		}
		hmap.insert(pair<int, int>(nums[i], i));

	}
	return results;

};
