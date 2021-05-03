#include <iostream>
#include <string>
using namespace std;

int main() 
{   
    string a,b,c;
	cin>>a>>b;
    
    int len=a.size();
    int len1=b.size();
    cout<<len<<' '<<len1<<endl;
    
    c=a+b;
    cout<<c<<endl;
    
    swap(a[0],b[0]);
    cout<<a<<' '<<b<<endl;
    
    
    
  
    return 0;
}
