#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     
        while(n--)
        {int count =0;
           vector<int>vec;
           for(int i=0;i<5;i++)
           {
               int x;
               cin>>x;
               if(x==1)
               count++;
           }
           if(count==0)
           cout<<"Beginner"<<endl;
           else if(count ==1)
           cout<<"Junior Developer"<<endl;
           else if(count ==2)
           cout<<"Middle Developer"<<endl;
           else if(count ==3)
           cout<<"Senior Developer"<<endl;
           else if(count ==4)
           cout<<"Hacker"<<endl;
           else 
           cout<<"Jeff Dean"<<endl;




        }
        return 0;

}