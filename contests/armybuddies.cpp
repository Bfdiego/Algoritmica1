#include<iostream>
#include <vector>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int s, b;
    while(cin >> s >> b && s && b) {
            vector<int> soldiers(s);
            for (int i = 0, j = 1; i < s; i++, j++) {
                soldiers[i] = j;
            }
            int leftOld=s;
            int rightOld=0;
            for (int i = 0; i < b; i++) {
                int l, r;   
                cin >> l >> r;
                if (leftOld <= l && l == rightOld+1) {
                    l = leftOld;
                } 
                
                if (rightOld > r && r == leftOld-1) {
                    r = rightOld;
                }
                
                soldiers[l-1] = -1;
                soldiers[r-1] = -1;
                if (l == 1) { 
                    cout << "* ";
                } else {
                    if (soldiers[0] == -1 && soldiers[l-2] == -1) {
                        cout << "* ";
                    } else {
                        cout << soldiers[l-2] << " ";
                    }
                }
                
                if (r == s) {
                    cout << "*" << endl;
                } else {
                    if (soldiers[s-1] == -1 && soldiers[r] == -1) {
                        cout << "*" << endl;
                    } else {
                        cout << soldiers[r] << endl;
                    }
                }
                
                leftOld = l;
                rightOld = r;                              
            }
        cout<<"-"<<endl;
        
    }
    return 0;
}
