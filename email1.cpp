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



void chaun(string &s){
    for (auto &x : s){
        x = tolower(x);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin , s);
        //chaun(s);
        int id;
        for (int i =0 ;i < s.size() ; i++){
            if (isdigit(s[i])){
                id = i;
                break;
            }
        }
        string ns = s.substr(id , 10);
        string name = s.substr(0 , s.size() - 10 - 1);
        chaun(name);
        stringstream ss(name);
        string wok;
        vector<string> res;
        while (ss >> wok){
            res.push_back(wok);
        }
        string ans1 = "";
        ans1 += res[res.size() -1];
        for (int i =0 ;i < res.size() -1 ; i++){
            ans1 += res[i][0];
        }
        ans1 += "@xyz.edu.vn";
        string ans2 = "";


        ans2 += to_string(stoi(ns.substr(0 , 2)));
        ans2 += to_string(stoi(ns.substr(3 , 2)));
        ans2 += to_string(stoi(ns.substr(6 , 4)));

        cout << ans1 << endl  << ans2 << endl;
    }
}
