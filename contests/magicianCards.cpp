#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int numbCards;
    while (cin >> numbCards && numbCards) {
        vector<string> cards(numbCards, "null");
        int position = 0;
        for (int i = 0; i < numbCards; i++) {
            string card, name;
            cin >> card >> name;
            int countNulls = 0;
            
            for (int j = position; j < numbCards; ) {
                if (cards[j] == "null") {
                    countNulls++;
                } 
                
                if (countNulls == name.size() && cards[j] == "null") {
                    cards[j] = card;
                    position = j;
                    break;
                }
                if (j >= numbCards-1) {
                    j = 0;
                } else {
                    j++;
                }
                
            }
        }
        cout << cards[0];
        for (int i = 1; i < cards.size(); i++) {
            cout << " " << cards[i];
        }
        cout << endl;
        
    }
    return 0;
}
