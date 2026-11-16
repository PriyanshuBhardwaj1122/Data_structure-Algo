class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l =0;
        int n =nums.size();
        int r=n-1;
        int idx=n-1;
        vector<int>result(n);
        while(l<=r){
           int a=nums[l]*nums[l];
            int b =nums[r]*nums[r];
            if(a>b){
                result[idx]=a;
                l++;
            }
            else{
                result[idx]=b;
                r--;
            }
            idx--;
        }
        return result;
    }
};