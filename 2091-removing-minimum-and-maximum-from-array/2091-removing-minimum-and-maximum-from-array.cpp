class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        int minIndex = find(nums.begin(), nums.end(), minVal) - nums.begin();
        int maxIndex = find(nums.begin(), nums.end(), maxVal) - nums.begin();

        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int front = right + 1;

        int back = n - left;

        int both = (left + 1) + (n - right);

        return min({front, back, both});
    }
};