#include <bits/stdc++.h>


#include<cstring>
using namespace std;
#define SCD(t) scanf("%d",&t)
#define MIN3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))


int main() {
    long long a,b,c,d,e,f,g,h,i,n,j,k,cou = 0,hyp=0,t;
    string s;
    string s0,s1,s2,temp;
    cin>>s>>s0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1>>s2;
        if (i==0)
            cout<<s<<" "<<s0<<endl;
         if (s1.compare(s) == 0)
         {
               temp.assign(s2);

               cout<<temp<<" "<<s0<<endl;
               s.assign(temp);
         }
         else if (s1.compare(s0) == 0)
         {
               temp.assign(s2);
               cout<<s<<" "<<temp<<endl;
               s0.assign(temp);


         }

    }

	return 0;
}
