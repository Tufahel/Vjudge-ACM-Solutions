#include <bits/stdc++.h>
#define ll long int
using namespace std;
int perfectSquare(string s)
{
    int n = s.size();
    int ans = -1;
    string num;
    for (int i = 1; i < (1 << n); i++) {
        string str = "";

        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                str += s[j];
            }
        }
        //cout<<str<<" ";
        if (str[0] != '0') {
            ll temp = 0;
            for (int j = 0; j < str.size(); j++)
                temp = temp * 10 + (ll)(str[j] - '0');

            ll k = sqrt(temp);
            if (k * k == temp) {
                if (ans < (ll)str.size()) {
                    ans = (ll)str.size();
                    num = str;
                }
            }
        }
    }

    if (ans == -1)
        return ans;
    else {
        return n - ans;
    }
}
int main()
{
    string st;
    cin>>st;
    int n=perfectSquare(st);
    cout<<n<<endl;
    return 0;
}
