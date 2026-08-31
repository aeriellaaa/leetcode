class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr(n); // {value, original_index}
        for (int i = 0; i < n; i++) {
            arr[i] = {nums[i], i};
        }
        
        sort(arr.begin(), arr.end());
        int l = 0;
        int f = arr.size()-1;
        while(l<f){
            int curr = arr[l].first + arr[f].first;
            if(curr == target){
                return {arr[l].second, arr[f].second};
            }
            else if(curr > target){
                 f--;
            }
            else if (curr < target ){
                l++;
            }
        } 
        return {};       
    }
};