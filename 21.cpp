// Tập từ chung của 2 xâu


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


/*void in(string &s){
    for (auto &x : s){
        x = tolower(x);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    string t; getline(cin , t);
    in(s); in(t);
    set<string> run1 , run2;
    stringstream ss(s);
    string wok;
    while (ss >> wok){
        run1.insert(wok);
    }
    stringstream zz(t);
    string x;
    while(zz >> x){
        run2.insert(x);
    }
    for (auto x : run1){
        if (run2.find(x) == run2.end()){
            cout << x << " ";
        }
    }
}
*/


// ghep xau:


/*bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string a[n];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    sort(a , a + n , cmp);
    for (auto x : a){
        cout << x;
    }
}
*/


//Xâu có đầu cuối giống nhau

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    vector<char> v;
    set<char> v1;
    map<char,int> v2;
    for (auto x : s){
        v.push_back(x);
        v1.insert(x);
        v2[x]++;
    }
    ll ans = 0;
    ans += v.size();
    for (auto x : v1){
        if (v2[x] >= 2){
            ll n = v2[x];
            ans += (long long) n  * (n-1) /2;
        }
        cout << ans << endl;
    }
    cout << ans;
}
