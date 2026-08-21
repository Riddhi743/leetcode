class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int num:nums){
            if(mp.count(num)){
                mp.erase(num);
            }else
            mp.insert({num,1});
        }
        vector<int> ans;
        for(auto p :mp){
            ans.push_back(p.first);
        }
        return ans;
    }
};