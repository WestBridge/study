/*
	 * 思路：遍历一遍nums中所有的数，计算complement=target-nums[i]，如果complement在hashmap中，
	 * 返回complement的下标和i,否则就把这个数存储，值为key,对应的下标为value。
	 * 
	 */
   public static int[] twoSum(int[] nums, int target) {
	   
     Map<Integer,Integer> hashmap=new HashMap<Integer,Integer>();
     for(int i=0;i<nums.length;i++){
    	 int complement=target-nums[i];
    	 if(hashmap.containsKey(complement)){
    		 return new int[]{hashmap.get(complement),i};
    	 }
    	 hashmap.put(nums[i], i);

     }
     throw new IllegalArgumentException("no two sum solution");
        
	   
    }
