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
    string sum = "";
    string ans = "";
    vector<string> v;
    for (int i =0 ;i < s.size() ;i++){
        if (isdigit(s[i])){
            sum += s[i];
        } else {
            while(sum.size() > 1 && sum[0] == '0'){
                sum.erase(0 , 1);
            }
            if (sum != "")v.push_back(sum);
            sum = "";
        }
    }
    sort(v.begin() , v.end());
    cout << v[v.size() -1];
}
*/


//Tính tổng các số xuất hiện trong xâu.


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    string tm = "";
    vector<string> v;
    ll sum =0 , ans =0;
    for (int i =0 ; i < s.size() ;i++){
        if (isdigit(s[i])){
            sum = sum  * 10 + s[i] - '0';
        } else {
            ans += sum;
            sum =0;
        }
    }
    ans += sum;
    cout << ans;
}

*/

// Ghép số.

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    string ans = "";
    vector<string> v;
    for (int i=0 ;i < s.size() ;i++){
        if (isdigit(s[i])){
            ans += s[i];
        } else{
            while(ans.size() > 1 && ans[0] == 0){
                ans.erase(0 , 1);
            }
            if (ans != "") v.push_back(ans);
            ans = "";
        }
    }
    if (ans != "") v.push_back(ans);
    sort(v.begin() , v.end() , greater<string> ());
    for (auto x : v) cout << x;

}
*/


// tinh tong chu so :


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    ll sum = 0;
    for (auto x : s){
        sum += x - '0';
    }
    cout << sum;
}
