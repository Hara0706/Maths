#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    
    ll t; cin>>t;
    while(t--)
    {
        unsigned long int a, n, p;
        cin>>a>>n>>p;
        
        unsigned long int temp;
        for(unsigned long int i=1; i<=n; i++)
        {
            temp = pow(a, i);
            temp%=p;
            a = temp;
        }
        cout<<a<<endl;
    }
    
	return 0;
}
