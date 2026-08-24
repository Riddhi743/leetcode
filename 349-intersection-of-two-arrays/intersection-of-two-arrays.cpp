class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> seen;
        unordered_set <int> ans;
        for(int num: nums1){
            seen.insert(num);
        }
        for(int num: nums2){
            if(seen.count(num)){
                ans.insert(num);
            }
        } return vector<int>(ans.begin(), ans.end());
    }
};