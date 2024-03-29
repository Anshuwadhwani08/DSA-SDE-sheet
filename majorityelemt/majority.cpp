class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n-1;i++){
            int count = 0;
            for(int j = i+1;j<n;j++){
               if(nums[i]==nums[j]){
                   count++;
               } 
            }
            if(count>=n/2)
            {
            
                return nums[i];
            }
        }
        return -1;
    }
};

//better
//use hashing
//it.first returns key and it.second returns value
//for(auto it:mpp) is used to iterate over map
//mpp[nums[i]]++ is used to increment the value of key nums[i] by 1
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};

//best 
//Moore's Voting Algorithm is like a fair way to decide things when there are different choices, 
//and you want to go with what most people like. It helps make decisions together!
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        int ele;
        for(int i=0;i<n;i++){
            if(count == 0){
               // count =1;
                ele = nums[i];
            }
            if(ele == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};
