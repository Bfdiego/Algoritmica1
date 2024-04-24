#include<bits/stdc++.h>
#include <stack>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input; 
    output;
    int n;
    while (cin >> n && n) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            int num = 0;
            cin >> num;
            nums[i] = num;
        }

        int found = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n-1;) {
                int absNum = abs(nums[j]-nums[j+1]);
                if (absNum == i) {
                    found++;
                    break;
                } else {
                    j++;
                }
            }
        }
        
         
        if (found == n-1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not Jolly" << endl;
        }
    }
    return 0;
}
