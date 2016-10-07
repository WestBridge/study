class Solution {
public:
    //思路
	/*
	先遍历一遍容器nums，判断当前的数是否在之前出现过，如果没有把它添加到容器map中，它的值作为map的key，它在nums中的下标作为map的value。
	然后计算target-当前值，判断计算所得出的数是否在之前出现过，如果是则在map中找与之对应的下标。把该下标和当前值的下标存入results中。
	*/
    vector<int> twoSum(vector<int>& nums, int target){
	unsigned int i;
	vector<int> results;
	map<int,int> hmap;
	for (i=0; i < nums.size(); i++)
	{
		if (!hmap.count(nums[i]))
		{
			hmap.insert(pair<int,int>(nums[i],i));

		}
		if (hmap.count(target - nums[i])){
	
		  unsigned int n =hmap[ target - nums[i]];
		  if (n<i)
		  {
			results.push_back(n);
			results.push_back(i);
			return results;
		  }
		}

	}
	return results;

};
