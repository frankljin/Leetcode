#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool replaceCheck(const string &str1, const string &str2) {
    bool diff = false;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i] && !diff) {
            diff = true;
        } else if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

bool insertCheck(const string &str1, const string &str2) {
    int idx1 = 0, idx2 = 0;
    while (idx1 < str1.length() && idx2 < str2.length()) {
        if (str1[idx1] != str2[idx2]) {
            if (idx1 != idx2) return false;
            idx2++;
        } else {
            idx1++;
            idx2++;
        }
    }
    return true;
}

bool oneEditAway(const string &str1, const string &str2 ) {
    if (str1.length() == str2.length()) {
        return replaceCheck(str1, str2);
    } else if (str1.length() + 1 == str2.length()) {
        return insertCheck(str1, str2);
    } else if (str2.length() + 1 == str1.length()) {
        return insertCheck(str2, str1);
    }
    return false;
}


void translate(bool result, const string str1, const string str2) {
    if (result == true) {
        cout << str1 << " and " << str2 << " are one edit away\n";
    } else {
        cout << str1 << " and " << str2 << " are not one edit away\n";
    }
}

int main() {
    translate(oneEditAway("pale", "ple"), "pale", "ple");
    translate(oneEditAway("pales", "pale"), "pales", "pale");
    translate(oneEditAway("pale", "pales"), "pale", "pales");
    translate(oneEditAway("pale", "bale"), "pale", "bale");
    translate(oneEditAway("pale", "bake"), "pale", "bake");
}