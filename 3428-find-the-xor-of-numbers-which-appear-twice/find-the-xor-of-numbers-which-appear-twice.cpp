class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            if(mp.count(num)){
                mp[num]++;
            }
            else 
            mp.insert({num,1});
        }
        int ans=0;
        for(auto [key,value]:mp){
            if(value==2){
                ans^=key;
            }
        }return ans;
    }
};