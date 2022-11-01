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

// Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt(Các kí tự không phải là chữ cái và chữ số).
/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    int a = 0 ,b = 0 , c =0;
    for (auto x  : s){
        if(isalpha(x)) a++;
        else if (isdigit(x)) b++;
    }
    cout << a << " " << b << " " << s.size() - a -b;
}
*/


//Tần suất xuất hiện của ký tự


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int> v;
    string s; cin >> s;
    for (auto x : s){
        v[x]++;
    }
    for (auto x : v){
        cout << x.first << " " <<  x.second << endl;
    }
    cout << endl;
    for (auto x : s){
        if (v[x] != 0){
            cout << x << " " << v[x] << endl;
        }
        v[x] = 0;
    }

}
*/


//Ký tự xuất hiện nhiều nhất trong xâu.


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    map<char,int> v;
    for (auto x : s){
        v[x]++;
    }
    char a , b; int kl1 = 0; int kl2 = INT_MAX;
    for (auto x : v){
        if (x.second >= kl1){
            kl1 = x.second;
            a = x.first;
        }
        if (x.second <= kl2){
            kl2 = x.second;
            b = x.first;
        }
    }
    cout << a << " " << kl1;
    cout << endl;
    cout << b << " " << kl2;
}
*/


// Ký tự xuất hiện ở cả 2 xâu.

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1 ,s2; cin >> s1 >> s2;
    set<char> v1 , v2;
    for (auto x : s1){
        v1.insert(x);
        v2.insert(x);
    }
    for (auto x : s2){
        v2.insert(x);
    }
    for (auto x : s2){
        if (v1.find(x) != v1.end()){
            cout << x;
        }
    }
    cout << endl;
    for (auto x : v2){
        cout << x;
    }
}
*/


//Ký tự xuất hiện ở 2 xâu 2.


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s , t; cin >> s >> t;
    set<char> ok1 , ok2;
    for (auto x : s){
        ok1.insert(x);
    }
    for (auto x : t){
        ok2.insert(x);
    }
    for (auto x : ok2){
        if(ok1.find(x) == ok1.end()){
            cout << x;
        }
    }
    cout << endl;
    for (auto x : ok1){
        if (ok2.find(x) == ok2.end()){
            cout << x;
        }
    }
}


*/


//Xâu đối xứng.

/*bool check(string s){
    string t = s;
    reverse(begin(t) , end(t));
    return s == t;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if (check(s)) cout << "UES";
    else cout << "No";
}
*/


//Xâu pangram 1

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    set<char> v;
    for (auto x : s){
        v.insert(x);

    }
    if (v.size() == 26) cout << "YES";
    else cout << "No";
}
*/



//  Liệt kê các từ khác nhau trong xâu.


/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin  , s);
    stringstream ss(s);
    string wok;
    vector<string> res;
    map<string,int> va;
    while(ss >> wok){
        res.push_back(wok);
        va[wok]++;
    }
    set<string> v;

    for (auto x : res){
        v.insert(x);
    }
    for (auto x : v){
        cout << x << " ";
    }
    cout << endl;
    for (auto x : res){
        if (va[x] != 0){
            cout << x << " ";
        }
        va[x] = 0;
    }
}
*/

//Sắp xếp các từ trong xâu 1




bool cmp(string a , string b){

    return a.size() < b.size();
}

bool tn(string s){
    string t =s;
    reverse(t.begin(), t.end());
    return s == t;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin ,s );
    stringstream ss(s);
    string wok;
    vector<string> v;
    while (ss >> wok){
        if (tn(wok)) v.push_back(wok);
    }

    cout << endl;
    stable_sort(v.begin(), v.end()  , cmp);
    for (auto x : v){
        cout << x << " ";
    }
}
