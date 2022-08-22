#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>finalhead;
    vector<string>finalsection;
    string storeSection = "";
    string storeHead = "";
    int count_section=0;
    int count_head=0;

    vector<string> vec;
    for(int i=0;i<n ;i++)
    {
        string str;
        getline(cin,str);
        vec.emplace_back(str);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].length();j++)
        {
            if(vec[i][j] == '#' && vec[i][j+1]==' ')
            { 
                if(vec[i][j+2] != ' ' )
                {
                    // storeHead.insert(vec[i][j+2])
                     storeHead += vec[i][j+2];
                     

                }
                
                // cout<<"flag_Check";
            }
            if(storeHead != "")
            {
                finalhead.push_back(storeHead) ;
               storeHead="";
               count_head++;
               break;
            }
            if(vec[i][j] == '#' && vec[i][j+1]=='#' && vec[i][j+2]==' ')
            { 
                if(vec[i][j+2] != ' ' )
                storeSection += vec[i][j+2];
                count_section++;
            }
             if(storeSection != "")
            {
                finalsection.push_back(storeSection) ;
               storeSection="";
               count_section++;
               break;
            }
        }
            
        
    }
    for(int i=0;i<count_head;i++)
    {
        cout<<i+1<<". "<<finalhead[i]<<endl;
        for(int j=0;j<count_head;j++)
        {
            cout<<i+1<<". "<<j+1<<". "<<finalsection[j]<<endl;
        }
    }
    return 0;
}