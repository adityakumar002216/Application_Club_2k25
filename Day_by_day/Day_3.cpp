//  1 pascal triangle triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p;
        for(int i=1;i<=numRows;i++){
            int n=1;
            vector<int> q;
            for(int j=1;j<=i;j++){
                q.push_back(n);
                n=n*(i-j)/j;
            }
            p.push_back(q);
        }
        return p;
    }
};


//2 Sort colour
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       // sort(nums.begin(),nums.end());
       int n=nums.size();
       int temp;
     for(int i=0;i<nums.size()-1;i++){
         for(int i=0;i<nums.size()-1;i++){
         if(nums[i]>nums[i+1])
         {
          temp=nums[i];
          nums[i]=nums[i+1];
          nums[i+1]=temp;   
         }
     }
     }
      }
};
