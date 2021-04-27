#include <iostream>
#include <vector>

using namespace std;

int main() {

    s = '12356';

    const int len = s.size();

    int res[len];

    for (int i = 0; i < len; i++) {
        res[i] = s[i] - '0';
        cout << res[i] << ' ';
    }

    cout << endl;

    return 0;
}
