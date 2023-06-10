  
#include <iostream>
#include <queue>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        queue <long long> q;
        // bool check = true;
        q.push(9);
        while(true) {
            if (q.front() % n == 0) {
                // check = false;
                cout << q.front();
                break;
            }
            q.push(q.front()*10);
            q.push(q.front()*10+9);
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
