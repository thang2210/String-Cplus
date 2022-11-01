//. Xâu con liên tiếp các kí tự != nhau.


#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    string ans = "";
    string res = string(1 , s[0]);
    ans += s[0];
    int t =1 , kq = 1;
    for (int i=1 ;i < s.size() ;i++){
        if (s[i] != s[i-1]){
            ans += s[i];
            t++;
        } else {
            ans = s[i];
            t = 1;
        }
        if (t > kq){
            kq = t;
            res = ans;
        } else if (t == kq){
            res = max(ans , res);
        }
    }
    cout << res << endl;

}
*/


//Xâu con liên tiếp các kí tự giống nhau.


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >>s;
    string ans = "";
    string res = string(1 , s[0]);
    ans += s[0];
    int cnt =1; int kl = 1;
    for (int i =1;i < s.size() ; i++){
        if (s[i] == s[i-1]){
            ans += s[i];
            cnt++;
        } else {
            ans = s[i];
            cnt =1;
        }
        if (cnt > kl){
            kl = cnt;
            res = ans;
        } else if (cnt == kl){
            res = max(res , ans);
        }
    }
    cout << res;
}
