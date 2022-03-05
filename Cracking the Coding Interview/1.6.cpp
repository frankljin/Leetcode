#include <iostream>
#include <string>

using namespace std;

string compress(string str) {
	string res = "";
    int consecutive = 0;
    for (int i = 0; i < str.length(); i++) {
        consecutive += 1;
        if (i + 1 >= str.length() || str[i] != str[i + 1]) {
            res += str[i];
            res += to_string(consecutive);
            consecutive = 0;
        }
    }
    return res.length() < str.length() ? res : str;
}

int main() {
	string str, out;
	cout << "Enter a string:\n";
	cin >> str;
	out = compress(str);
	if (str.compare(out)) {
		cout << str << " can be compressed to " << out << endl;
	} else {
		cout << str << " can not be compressed\n";
	}
	return 0;
}