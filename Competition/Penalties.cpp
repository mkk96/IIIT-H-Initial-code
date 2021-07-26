#include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin >> t;
     
        while(t--){
            string s; 
            cin >> s;
            // A1 = Team A's 1 count, B1 = Team B's 1 count
            // Aq = Team A's ? count, Bq = Team B's ? count
            int A1 = 0, B1 = 0, Aq = 0 , Bq = 0, n = 10, i = 1;
            s.insert(s.begin(), '0');

            for(i=1; i<=n; i++){
                if(i%2 == 0){
                    if(s[i] == '1')
                        B1++;
                    else if(s[i] == '?')
                        Bq++;
                    // check if Team A can win now
                    if(A1 + Aq > B1 + (n-i)/2){
                        break;
                    }
                }
                else{
                    if(s[i] == '1')
                        A1++;
                    else if(s[i] == '?')
                        Aq++;
                    // check if Team A can win now
                    if(A1 + Aq > B1 + (n-i+1)/2){
                        break;
                    }
                }
                
                //check if team B can win
                if(B1 + Bq > A1 + (n-i)/2){
                        break;
                }
            }
            
            cout << min(i, n) << endl;
        }
    }
