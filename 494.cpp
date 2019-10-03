#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    while(getline(cin,s)){


        int l = s.size(),c=0,m=0;


        for(int i = 0;i<l;i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                c++;

                //cout<<i<<" "<<c<<endl;

                for(int j = i+1;j<l;j++){
                    if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122)){
                       m++;

                       if(j==l-1){
                        i = l;
                        break;
                       }
                    }
                    else{
                        i = j;
                        //cout<<j<<endl;
                        break;
                    }
                }
            }

        }

        cout<<c<<endl;

    }

}
