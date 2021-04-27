#include <iostream>

using namespace std;

int main() {

    // string s = "asdfghvbmmaopiu";
    string s = "mmmmabbccd";
    
    const int len = s.size();

    int res = s[0];

    for (int i = 1; i < len; i++) {
        int temp = s[0] - '0';
        for (int j = i; j < len; j++) {
            if (temp != str[j] - '0') {
                if (j == len - 1) {
                   res = temp + '0'; 
                   break;
                }
                continue;
            } else {
                temp = str[j] - '0'; 
            }
        }
    }

    cout << res << endl;
    
    return 0;

}


