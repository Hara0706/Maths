#include <bits/stdc++.h>
using namespace std;

int main() {
    float x = 1.0;
    int persons = 0;
    
    float num = 365;
    float deno = 365;
    
    float p;
    cin>>p;
    
    while(x>1-p)
    {
        x = x*(num)/deno;
        num--;
        persons++;
    }
    cout<<persons<<endl;
    
	return 0;
}
