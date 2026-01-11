#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

class solution {
public:
    void operate(vector<pair<int, string>> &pairs) {
        int sum = 0;
        string result = "";

        for (auto p : pairs) {
            sum += p.first;
            result += p.second;
        }

        cout << sum << endl;
        cout << result << endl;
        cout << result.length() << endl;
    }
};

int main() {
    int n;
    cin >> n;   // number of pairs

    vector<pair<int, string>> pairs;

    for (int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> x >> s;
        pairs.push_back({x, s});
    }

    solution obj;
    obj.operate(pairs);

    return 0;
}
