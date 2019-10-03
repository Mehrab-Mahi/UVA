#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

string findSum(string num1, string num2) {
        string r = "";
        int sz1 = num1.size();
        int sz2 = num2.size();
        int i = 0, j = 0, c = 0;
        while (i < sz1 || j < sz2 || c > 0) {
            int t = c;
            t += i < sz1 ? num1[sz1 - i - 1] - 48 : 0;
            t += j < sz2 ? num2[sz2 - j - 1] - 48 : 0;
            r = string(1, t % 10 + 48) + r;
            c = t / 10; // carry over next digit
            i ++;
            j ++;
        }
        return r;
    }

int main()
{
    optimize;

    int l;

    string s;

    cin>>l>>s;

    vector<char>v;
    for(int i = 0;i<s.size();i++){
        v.pb(s[i]);
    }

    int maan = 1,x,y;
    string s1="",s2=s,sum = s;
    for(int i=0;i<v.size()-1;i++){
        string ss(1, s[i]);
        s1.insert(i,ss);
        s2.erase(s2.begin()+0);

        if(s2[0]!='0'){


        string str = findSum(s1,s2);
        //cout<<s1<<" "<<s2<<" "<<str<<endl;

        if(sum.size()==str.size()){
            if(sum>str)
                sum = str;
        }
        else{
            if(sum.size()>str.size())
                sum = str;
        }
    }

    }

    cout<<sum<<endl;

}
