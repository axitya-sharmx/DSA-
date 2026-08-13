#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible(vector<int>& arr, int day, int m, int k) {
        int n = arr.size();
        int cnt = 0;
        int bouquets = 0;

        for (int i = 0; i < n; i++) {

            if (arr[i] <= day) {
                cnt++;

                if (cnt == k) {
                    bouquets++;
                    cnt = 0;
                }
            }
            else {
                cnt = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long required = 1LL * m * k;

        if (required > bloomDay.size())
            return -1;

        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};