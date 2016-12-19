#include <bits/stdc++.h>
using namespace std;

int main() {
    float t,a,b,x1,x2,x3,y1,y2,y3;
    float mid1,mx1,mx2,mx3,my1,my2,my3,x14,x24,x34,y14,y24,y34;

    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    mx1= (x1+x2)/2;
    mx2= (x3+x2)/2;
    mx3 = (x1+x3)/2;
    my1 =(y1+y2)/2;
    my2=(y3+y2)/2;
    my3=(y1+y3)/2;

    if (mx1!=x3)
        x14=2*mx1-x3;
    else
        x14=mx1;


    if (my1!=y3)
        y14=2*my1-y3;
    else
        y14=my1;


    if (mx2!=x1)
        x24=2*mx2-x1;
    else
        x24=mx2;


    if (my2!=y1)
        y24=2*my2-y1;
    else
        y24=my2;


    if (mx3!=x2)
        x34=2*mx3-x2;
    else
        x34=mx3;


    if (my3!=y2)
        y34=2*my3-y2;
    else
        y34=my3;

    cout<<"3"<<endl;
    cout<<x14<<" "<<y14<<endl;
    cout<<x24<<" "<<y24<<endl;
    cout<<x34<<" "<<y34<<endl;

	return 0;
}
