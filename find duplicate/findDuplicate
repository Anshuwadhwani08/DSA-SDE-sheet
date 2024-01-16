//with extra constant space
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        int repeat ;
        vector<int> extra(n,0);
        for (int i = 0;i<nums.size();i++){
            if(extra[(nums[i]-1)] == 0)
            {
                extra[(nums[i]-1)]=1;
            }
            else{
            repeat = nums[i];
            break;
               
            }
        }
       return repeat; 
    }
};
// no extra space 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int repeat;
        for(int i=0;i<nums.size();i++){
           if(nums[i] == nums[i+1]){
               repeat = nums[i];
               break;
           }
        }
        return repeat;
    }
};

//