class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                 int sum = 0;
              for(int k=i;k<=j;k++){
                  sum = sum + nums[k];
              }
              maxi = max(maxi,sum);  
            }
        }
        return maxi;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
             int sum = 0;
            for(int j=i;j<n;j++){
                  sum = sum + nums[j];
                  maxi = max(maxi,sum); 
              }
               
            }
        return maxi;
    }
};