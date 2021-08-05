#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact(ll i)
{
    if(i==0 || i==1) return 1;
    else return i*fact(i-1);
}

int main() {
    ll n; cin>>n;
    ll b = (fact(2*n)/(fact(n)*fact(n)))/(n+1);
    cout<<b<<" ";
   
	return 0;
}
