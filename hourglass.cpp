#include <iostream>
using namespace std;  
int main()
{
    int n;
    int i,j,k,a,b,c;
    cin>>n;    
  for(i=1; i<=n; i++)
  {
    for(k=0; k<i ; k++)
      cout<< " ";
    for(j=1; j<= n-i+1; j++)
      cout<<" *";
    cout << endl;  
  }
   for(a=2; a<=n; a++){
  {
    for(c=n-a+1; c>0; c--)
      cout<< " ";
    for(b=1; b<= a; b++)
      cout<<" *";
    cout << endl;  
  }
  }
return 0;
}