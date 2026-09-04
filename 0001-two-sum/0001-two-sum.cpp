class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i = 0; i<nums.size();i=i+1){
            int lookingfor = target - nums[i];
            if(map.find(lookingfor)!=map.end()){
                return {i,map[lookingfor]};
            }
            map[nums[i]]=i;
            
         }
         return {-1,-1};
            
        }
        
    };