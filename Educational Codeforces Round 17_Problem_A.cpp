#include<bits/stdc++.h>

using namespace std;


int main()
{
   long long num,m,d,pil,pos,res,cou=0,startDay,numRows=0,daysInMonth,j=0,k=0,l=0,odd[99999],even[99999];

       cin>>num>>m;

       long long square_root = (int) sqrt(num) + 1;
       for (int i = 1; i < square_root; i++)
        {
            if (num % i == 0 )
            {
                    odd[k]=i;
                    k++;
                    if (i*i!=num)
                    {
                        even[l]=num/i;
                        l++;
                    }
                    j++;
            }
        }


    long long len = k+l;

    if(m>len)
    {
        cout << "-1"<<endl;

    }
    else
    {
        if(m<=k)
            cout<<odd[m-1];
        else
        {
            cout<<even[l-(m-k)];
        }
    }

        return 0;
}
