#include <bits/stdc++.h>
using namespace std;

int main() {
    // ⚡ Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int total_points = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char ch;
                cin >> ch; 

                if (ch == 'X') {
    
                    int d = min({i, 9 - i, j, 9 - j});

                    
                    total_points += (d + 1);
                }
        }
}

cout << total_points << "\n";
}

return 0;
}