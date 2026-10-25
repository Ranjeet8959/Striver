#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int maxi = nums[0];
    for(int i = 1;i<n;i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }
    cout<<maxi<<endl;
    return 0;
    
}

