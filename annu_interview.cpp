#include<bits/stdc++.h>
using namespace std;

int main(){
   // vector<int>vec(10);
    vector<string>vec2(10);
    // for(int i=0;i<=9;i++)
    // {
    //     vec[i]=i;
    // }
    vec2[0]="zero";
    vec2[1]="one";
    vec2[2]="two";
    vec2[3]="three";
    vec2[4]="four";
    vec2[5]="five";
    vec2[6]="six";
    vec2[7]="seven";
    vec2[8]="eight";
    vec2[9]="nine";
   
    int num;
    cin>>num;
    int digit_count=0;
    for(int i=num;i>0;i/=10){
        digit_count++;
    }
    cout<<"count digit :"<<digit_count<<endl;
    string result ="";
    int temp;
    for(int i=digit_count-1;i>=0;i--){
        cout<<"flag\n";
        temp = num /(int) pow(10,i);
        cout<<"temp : "<<temp<<endl;
        
      num = num -(int)  (temp * pow(10,i));
      cout<<"num : "<<num<<endl;
        result =result+ " "+ vec2[temp];
        cout<<result<<endl;
cout<<endl<<endl;
    }
    cout<<result<<endl;

}