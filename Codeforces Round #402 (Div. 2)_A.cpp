#include <bits/stdc++.h>
using namespace std;
#define SCD(t) scanf("%d",&t)
#define MIN3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))

int main() {

    int a,b,n,i,ar[111],br[111],cou=0,o=0,o1=0,t=0,t1=0,th=0,th1=0,f=0,f1=0,fi=0,fi1=0,oo=0,tt=0,thr=0,ff=0,fiv=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
                cin>>ar[i];
                if (ar[i]==1)
                o++;
                else if (ar[i]==2)
                t++;
                else if (ar[i]==3)
                th++;
                else if (ar[i]==4)
                f++;
                else if (ar[i]==5)
                fi++;
    }


  for(i=0;i<n;i++)
  {
                cin>>br[i];

         if (br[i]==1)
                o1++;
                else if (br[i]==2)
                t1++;
                else if (br[i]==3)
                th1++;
                else if (br[i]==4)
                f1++;
                else if (br[i]==5)
                fi1++;
  }
  oo=abs(o1-o);
  if(oo%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  tt=abs(t1-t);
  if(tt%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  thr=abs(th1-th);
  if(thr%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  ff=abs(f1-f);
  if(ff%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  fiv=abs(fi1-fi);
  if(fiv%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
  cout<<((oo/2)+(tt/2)+(thr/2)+(ff/2)+(fiv/2))/2<<endl;


	return 0;
}

