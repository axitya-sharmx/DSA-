class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        map<int, int> mp;

       
        for (int x : nums) {
            mp[x]++;
        }

        for (int i = k; ; i += k) {
            if (mp.find(i) == mp.end()) {
                return i;
            }
        }
    }
};