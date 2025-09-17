class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < m; i++) 
            if(nums1[i] == 0) nums1[i] = nums2[i-n];

        sort(nums1.begin(), nums1.end());

        for(auto& a : nums1) cout << a << " ";    
    }
};