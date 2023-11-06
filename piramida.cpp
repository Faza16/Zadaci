#include <iostream>
using namespace std;  
int main()
{
    int n;
    int i,j,k;
    cin>>n;    
  for(i=1; i<=n; i++)
  {
    for(k=n-i; k>0; k--)
      cout<< " ";
    for(j=1; j<=i; j++)
      cout<<"* ";
    cout << endl;  
  }
return 0;
}
