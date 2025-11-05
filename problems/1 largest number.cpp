#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        int n = nums.size();

        vector<string>st;


        for(int i=0; i<n; i++){
        st.push_back(to_string(nums[i]));
        }

       

        sort(st.begin(), st.end(),[](string &a, string &b){
            return a+b > b+a;
        });

        string ans;

        for(string &x : st){
            ans += x;
        }

        if(ans[0] == '0'){
            return "0";
        }

        return ans;

    }
};


int main(){
    int n;
    cin >> n;
    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    Solution obj;

    string result = obj.largestNumber(nums);

    cout << result;

    return 0;
}