class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = *min_element(nums1.begin(), nums1.end());

        int parity = nums1[0] % 2;

        for (int i = 1; i < nums1.size(); i++) {

            if (nums1[i] % 2 != parity) {

                if (mn % 2 == 0)
                    return false;

                break;
            }
        }

        return true;
    }
};