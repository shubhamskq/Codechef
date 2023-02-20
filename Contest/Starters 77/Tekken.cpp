#include <bits/stdc++.h>
using namespace std;
      
        void Solve(){
            int a,b,c;
            cin >> a >> b >> c;
            if(a > max(b,c) - min(b,c)){
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
int main() {
           int t;
           cin >> t;
           while(t--){
               Solve();
           }
	return 0;
}
