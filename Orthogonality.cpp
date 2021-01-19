#include<bits/stdc++.h>
#define    fios ios_base::sync_with_stdio(false); cin.tie(0);
#define    sf(x) scanf("%d",&x)
#define    sfl(x) scanf("%lld",&x)
#define    pf(x) printf("%d\n",x)
#define    pfl(x) printf("%lld\n",x)
#define    ll long long
#define    nl "\n"
#define    PB(x) push_back(x)
#define    For(i,n) for(int i=0; i<n; i++)
#define    PI acos(-1)
using namespace std;


int main()
{
    int n,x;

    cin>>n;

    vector<int> v1,v2;

    for(int i=0; i<n; i++)
    {

        cin>>x;
        v1.push_back(x);
    }

     for(int i=0; i<n; i++)
    {

        cin>>x;
        v2.push_back(x);
    }

    int prd=0;

     for(int i=0; i<n; i++)
    {
       prd+=v1[i]*v2[i];

    }

    if(prd==0)
        cout<<"Yes"<<nl;
    else
        cout<<"No"<<nl;




    return 0;
}
