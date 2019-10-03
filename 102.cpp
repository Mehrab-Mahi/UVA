#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define pb push_back

using namespace std;

int main()
{
    optimize;

    long long int b[3],g[3],c[3];

    while(cin>>b[0]>>b[1]>>b[2]>>g[0]>>g[1]>>g[2]>>c[0]>>c[1]>>c[2]){
        long long int mn = 2147483648, cc = 0;

        vector<char>main,v;
        char a[3];
        map<int,char>mp;
        mp[0] = 'B';
        mp[1] = 'G';
        mp[2] = 'C';


        main.pb('Z');
        main.pb('Z');
        main.pb('Z');

        v.pb(mp[0]);

        cc+=b[1]+b[2];

        v.pb(mp[1]);

        cc+=g[0]+g[2];

        v.pb(mp[2]);

        cc+=c[0]+c[1];


        if(cc<mn){
            mn = cc;
            main = v;
        }




        v.clear();
        cc = 0;

        v.pb(mp[0]);

        cc+=b[1]+b[2];

        v.pb(mp[2]);

        cc+=g[0]+g[1];

        v.pb(mp[1]);

        cc+=c[0]+c[2];


        if(cc<mn){
            mn = cc;
            main = v;
        }
        else if(cc==mn){
            if(v<main)
                main = v;
        }





        v.clear();
        cc = 0;

        v.pb(mp[1]);

        cc+=b[0]+b[2];

        v.pb(mp[0]);

        cc+=g[2]+g[1];

        v.pb(mp[2]);

        cc+=c[0]+c[1];


        if(cc<mn){
            mn = cc;
            main = v;
        }
        else if(cc==mn){
            if(v<main)
                main = v;
        }



        v.clear();
        cc = 0;

        v.pb(mp[1]);

        cc+=b[0]+b[2];

        v.pb(mp[2]);

        cc+=g[0]+g[1];

        v.pb(mp[0]);

        cc+=c[1]+c[2];


        if(cc<mn){
            mn = cc;
            main = v;
        }
        else if(cc==mn){
            if(v<main)
                main = v;
        }



        v.clear();
        cc = 0;

        v.pb(mp[2]);

        cc+=b[1]+b[0];

        v.pb(mp[0]);

        cc+=g[2]+g[1];

        v.pb(mp[1]);

        cc+=c[0]+c[2];


        if(cc<mn){
            mn = cc;
            main = v;
        }
        else if(cc==mn){
            if(v<main)
                main = v;
        }

        v.clear();
        cc = 0;

        v.pb(mp[2]);

        cc+=b[1]+b[0];

        v.pb(mp[1]);

        cc+=g[0]+g[2];

        v.pb(mp[0]);

        cc+=c[1]+c[2];


        if(cc<mn){
            mn = cc;
            main = v;
        }
        else if(cc==mn){
            if(v<main)
                main = v;
        }


        for(int i = 0;i<main.size();i++)
            cout<<main[i];

        cout<<" "<<mn<<endl;


    }

}
