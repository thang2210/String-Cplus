// Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.



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


int _min(int n , int s){
    s--; n--;
    string ok ="";
    for (int i =0 ;i < n ;i++){
        if (s >= 9){
            ok = ok + "9";
            s -= 9;
        } else {
            ok = to_string(s) + ok;
            s = 0;
        }
    }
    s += 1;
    ok = to_string(s) + ok;
    cout << ok;
}

int _max(int n , int s){
    string tm = "";
    for (int i =0 ;i < n ;i++){
        if (s >= 9){
            tm = "9" + tm;
            s -= 9;

        } else {
            tm = tm + to_string(s);
            s = 0;
        }
    }
    cout << tm;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , s; cin >> n >> s;
    if (n * 9 < s){
        cout << "found";
        return 0;
    }   else {
        _min(n , s);
        cout << endl;
        _max(n , s);
    }
}
