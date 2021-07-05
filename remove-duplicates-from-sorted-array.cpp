class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        int i=0,j=0;
        
        if(n==0){
            return 0;
        }
        
        while(j<n-1){
            
            if(nums[j]==nums[j+1]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j+1];
                j++;
            }
        }
        
        return i+1;
    }
};
