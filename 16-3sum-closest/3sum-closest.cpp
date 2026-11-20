class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        for(int i =0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[r]+nums[l];
                if(abs(target-sum)<abs(target-closest)){
                    closest=sum;
                   
                }      
                else if(sum>target)r--;
                else if(sum<target){
                    l++;
                
                }
                else return target;      
                }

        }
        return closest;
    }
};