#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {

  public:
  void findcombination(int i, int target, vector<int>&candidates, vector<vector<int>> &ans, vector<int>&bucket ){
      //base case
     if(i==candidates.size()){
         if(target==0){
         ans.push_back(bucket);
         }
         return;
     }



      //recursive case
      if(candidates[i]<=target)
      {
     bucket.push_back(candidates[i]);
     findcombination(i,target-candidates[i],candidates, ans, bucket);
     bucket.pop_back();
     }
     
     findcombination(i+1,target,candidates,ans,bucket);


  }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> bucket;
        vector<vector<int>> ans;
        findcombination(0,target,candidates,ans,bucket);
        return ans;


    }
};

int main(){
vector<int> candidates{2,3,6,4,1,7};
Solution answer;
vector<vector<int>>a = answer.combinationSum(candidates,7);
 for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }


}