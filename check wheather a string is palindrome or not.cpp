#n
int main()

{
    string str;
   
   cin>>str;
   int n = str.length();
  for(int i=0;i<n/2;i++)
  {
      swap(str[i],str[n-1-i]);
  }
  cout<<str;
}
