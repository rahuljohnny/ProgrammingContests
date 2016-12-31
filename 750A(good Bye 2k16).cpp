#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g=0,h,i=1,n,j,k,cou = 0,res;
    cin>>n>>k;
    res= 240-k;
    while(g<=res && i<=n)
    {
        j=i*5;
        g+=j;
        i++;
        cou++;
    }
    if (g > res )
    {
        cou =cou-1;

    }

    cout<<cou<<endl;
	return 0;
}

