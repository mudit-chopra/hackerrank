#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j,c=0,t,k;
   // cout<<"enter the money:";
   cin>>t;
   for(k=1;k<=t;k++){
    cin>>m;
  //  cout<<endl;
 //   cout<<"enter the total flavors:";
    cin>>n;
    //int *a;
   int a[n]={0};
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==m)
            {
                cout<<i+1<<" ";
                cout<<j+1;
                cout<<endl;
                c=1;
            }
            if(c==1)
    break;
        }
if(c==1)
    break;
    }
}
}
