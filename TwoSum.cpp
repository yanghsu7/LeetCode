# LeetCode

class Solution {
public:
    //Use two for-loops 
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int index1 =0;
        int index2 =0;
        //O(n^2)
       for(int i =0; i<nums.size();i++)
            for(int j =i+1; j<nums.size();j++)
                if((nums[i]+nums[j]==target)){
                    index1= i+1;
                    index2 =j+1;
                    cout<<"index1="<<index1<<", index2="<<index2<<endl;
                    int b[]={index1,index2};
                    a.assign(b,b+2);
                }
        return a;
    }
    
    //Use hashmap
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> a;
        
        return a;
    }

};
