class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int rightMax = -1;

        for (int i = n - 1; i >= 0; --i)  {
            ans[i] = rightMax; // answer first
            rightMax = max(rightMax, arr[i]); // then includes arr[i]
        }
        return ans;
    }
};