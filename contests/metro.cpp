#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)


int main() {
    input;
    output;
    int n, s;
    bool found = false;
    bool arrived = false;
    bool goBack = false;
    cin >> n >> s;
    int ult = n-1;
    int alice = s-1;
    vector<int> a(n);
    vector<int> b(n);
    //Comienza los for
    for (int i = 0; i < n; i++) {
        int status;
        cin >> status;
        a[i] = status;
    }
    
    for (int i = 0; i < n; i++) {
        int status;
        cin >> status;
        b[i] = status;
    }
    
    bool go = false;
    if (a[0] == 1) {
        go = true;
    }
    
    if (a[alice] == 1 && go) {
        cout << "YES" << endl;
        found = true;
    } 

    if (a[ult] == 1 && b[ult] == 1 && go) {
        arrived = true;
        goBack = true;
    } else if (go){
        for (int i = s; i < n-1; i++) {
            if (a[i] == 1 && b[i] == 1) {
                arrived = true;
                goBack = true;
                break;
            }  
        }
    }
    
    if (b[alice] == 1 && goBack) {
        if (found) {
        } else {
        cout << "YES" << endl;
        found = true;
        }
    }
    if (found == false) {
        cout << "NO" << endl;
    }
    return 0;
}
