#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n,v;
    char st[10];
    string s;

    cin>>t;

    while(t--){
        cin>>n;
        cin.ignore();

        map<int,string>mp;
        int pos=0;

        for(int i = 1;i<=n;i++){
            getline(cin,s);

            if(s=="LEFT"){
                pos--;
                mp[i] = "LEFT";
            }
            else if(s=="RIGHT"){
                pos++;
                mp[i] = "RIGHT";
            }
            else{
                int maan = 0;
                vector<int>v;

                for(int j = s.size()-1;j>=0;j--){
                    if(s[j]==' ')
                        break;
                    v.pb(s[j]-48);
                }

                for(int j = v.size()-1;j>=0;j--)
                    maan = (maan*10)+v[j];

                if(mp[maan]=="RIGHT"){
                    pos++;
                    mp[i] = "RIGHT";
                }
                else if(mp[maan]=="LEFT"){
                    pos--;
                    mp[i] = "LEFT";
                }
            }

            //cout<<pos<<endl;
        }

        cout<<pos<<endl;
    }

}
