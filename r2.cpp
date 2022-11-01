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

//Tần suất các từ xuất hiện trong xâu.


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    stringstream ss(s);
    string wok;
    vector<string> v;
    map<string ,int> res;
    while(ss >> wok){
        v.push_back(wok);


    }
    for (auto x : v){
        res[x]++;
    }
    for (auto x : res){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (auto x : v){
        if (res[x] != 0){
            cout << x << " " << res[x] << endl;
        }
        res[x] = 0;
    }

}
*/

//ừ xuất hiện nhiều nhất, ít nhất

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    stringstream ss(s);
    string wok;
    vector<string> v;
    map<string ,int> res;
    while(ss >> wok){
        v.push_back(wok);


    }
    for (auto x : v){
        res[x]++;
    }
    string ok; int kl =0;
    string b; int kl2 = INT_MAX;
    for (auto x : res){
        if (x.second > kl){
            kl = x.second;
            ok = x.first;
        }
        if (x.second < kl){
            kl2 = x.second;
            b = x.first;
        }
    }
    cout << ok << " " << kl;
    cout << endl;
    cout << b << " " << kl2;

}
*/


//Ngôn ngữ lập trình Python.


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    string tm = "python";
    int cnt =0;
    for (int i =0 ;i < s.length() ; i++){
        if (s[i] == tm[cnt]){
            cnt++;
        }
    }
    if (cnt == 6) cout << "ok";
    else cout << "0";
}
