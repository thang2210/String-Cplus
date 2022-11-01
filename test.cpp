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




bool check(string s){
    char ok = s[0];
    for (int i = 1; i < s.size() ;i++){
        if (s[i] < ok){
            return false;
            ok = s[i];
        }
    }
    return true;
}

bool ans(string s){
    char t = s[0];
    for (int i =1;i < s.size() ;i++){
        if (s[i] > t){
            return false;
            t = s[i];
        }
    }
    return true;
}


int s11(string s){
    ll sum1 =0 , sum2 =0;
    for (int i =0 ;i < s.size() ; i++){
        if(i % 2 == 0) sum1 += s[i] - '0';
        else sum2 += s[i] - '0';
    }
    ll res = abs(sum1 - sum2);
    if (res % 11 == 0) return 1;
    else return 0;
}


bool  smm(ll n){
    ll sum =0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum == 9) return true;
    else {
        ll ans = sum;
        while(sum != 0){
            ans += n % 10;
            n /= 10;
        }
        if(ans == 9) return true;
        else return false;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    if (smm(n)) cout << "YES";
    else cout << "No";
}
