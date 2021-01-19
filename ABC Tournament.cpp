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

    n=pow(2,n);

    vector<int> a,l,r;

        for(int i=0; i<n; i++)
        {

            cin>>x;
            a.push_back(x);

        }

       for(int i=0; i<n/2; i++)
        {


            l.push_back(a[i]);

        }
         for(int i=n/2; i<n; i++)
        {


            r.push_back(a[i]);

        }

       sort(l.begin(),l.end());
       sort(r.begin(),r.end());


        int val = min(l[(n/2)-1],r[(n/2)-1]);


        for(int i=0; i<n; i++)
        {
            if(a[i]==val)
            {
                cout<<i+1<<nl;
                break;
            }
        }






    return 0;
}
