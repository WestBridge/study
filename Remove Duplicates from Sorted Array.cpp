//思路：先判断数组的长度，如果小于等于1，则直接返回数组长度，否则遍历元素。设两个指针i和j，i用来遍历原数组每个元素，j用来遍历更新后的数组中每个元素，
i在前，j在后。如果i和j所指元素相等，i向前移直到两者所指元素不相等，j前移一位，把i所指的元素赋给j，重复操作直到i遍历结束。
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int len=nums.size();
        if(len==0) return 0;
        if(len==1) return 1;
		for(int i=1;i<len;i++ ){	
			if(nums[i]!=nums[j]){
			    nums[++j]=nums[i];
	    	}
		}
		return j+1;
    }
     
};
