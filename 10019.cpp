#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;
    int n,t,m;

    cin>>t;

    while(t--){
        cin>>n;
        bitset<14> bset(n);

        int b1 = 0,b2=0;

        for(int i = 0;i<14;i++)
            if(bset[i]==1)
                b1++;


        while(n){
           m = n%10;

           if(m==1)
                b2++;
           else if(m==2)
                b2++;
           else if(m==3)
                b2+=2;
           else if(m==4)
                b2++;
           else if(m==5)
                b2+=2;
           else if(m==6)
                b2+=2;
           else if(m==7)
                b2+=3;
           else if(m==8)
                b2++;
           else if(m==9)
                b2+=2;

            n = n/10;
        }

        cout<<b1<<" "<<b2<<endl;
    }


}
