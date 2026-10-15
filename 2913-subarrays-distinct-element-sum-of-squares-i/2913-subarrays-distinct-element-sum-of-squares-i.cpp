class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            set<int> seen;          
            for (int j = i; j < n; j++) {
                seen.insert(nums[j]);
                int d = seen.size();
                sum += d * d;
            }
        }
        return sum;
    }
};