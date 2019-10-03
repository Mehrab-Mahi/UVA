#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,ans;

    cin>>t;

    vector<int>v,vv,fnl;

    while(t--){
        v.clear();
        vv.clear();
        fnl.clear();

        ll n,m;
        ans=0;
        cin>>n;

        m = n;

        while(m){
            v.insert(v.begin()+0,(m%10));
            m/=10;
        }

        vv = v;

        reverse(vv.begin(),vv.end());

        while(1){

            int carry = 0,x=0;
            if(vv!=v){
                ans++;
                fnl.clear();


           /*     if(ans==5){
                    cout<<"    ";
                    for(int i =0;i<v.size();i++){
                        cout<<v[i];
                    }
                    cout<<endl;
                }
            */


                //cout<<" "<<ans<<endl;
                for(int i = v.size()-1;i>=0;i--){
                    x = v[i]+vv[i]+carry;
                    fnl.insert(fnl.begin()+0,(x%10));

                    carry = x/10;

                }

                if(carry!=0){
                    fnl.insert(fnl.begin()+0,carry);
                }

                v.clear();
                vv.clear();

                v = fnl;
                vv = v;

                reverse(vv.begin(),vv.end());



            }
            else{
                cout<<ans<<" ";

                for(int i = 0;i<v.size();i++){
                    cout<<v[i];
                }

                cout<<endl;

                break;


            }
        }


    }

}
