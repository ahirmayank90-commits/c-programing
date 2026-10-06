#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>num, int target){
    vector<int> ans;
    int n=num.size();
    int  i=0,j=n-1;
    while(i<j){
        if(num[i]+num[j]<target){
            i++;
        }else if(num[i]+num[j]>target){
            j--;
        }else{
            ans.push_back(num[i]);
            ans.push_back(num[j]);
            i++;
            j--;
        }
    }
return ans;
}
int main(){
    vector<int> num={2,7,9,14,19};
    int target=9;
    vector<int> ans=pairSum(num,target);
    cout<<ans[0] << "," <<ans[1];
    return 0;

}


