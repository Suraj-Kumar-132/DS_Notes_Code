#include<bits/stdc++.h>
using namespace std;
// Iterative Approach
int main(){
    int num;
    cin>>num;

    vector<int>vec(num);
    for(int i=0;i<num;i++){
        cin>>vec[i];

    }
    int x, flag =0;
    cin>>x;

    for(int i =0;i<num;i++){
        if(vec[i] == x)
        {
            cout<<"found"<<endl;
            flag =1;
             break;
        }
    }
    if(!flag){
        cout<<"Not found";
    }
    return 0;
}