class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<vector<int>> result;
        for(int i = 0;i<=(int)s.size() - 3; i++){
            if(i>0 && s[i] == s[i-1]) continue;
            int k = i+1;
            int j = s.size() - 1;
            while(i < j && k < j){
                int sum1 = s[i] +s[j];
                int lookingfor = 0 - sum1;
                if(s[k] == lookingfor){
                    result.push_back({s[k],s[i],s[j]});
                    k++;
                    j--;
                    while(k < j && s[k]== s[ k - 1]) k++;
                    while(k <j && s[j]== s[j+1]) j--;
                }
                else if (s[k]<lookingfor){
                    k++;
                }
                else{
                    j--;
                }
            }
        }
        return result;        
    }
    
};