#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	
	//0 -> sheldon	= 1 	6 7 		16 17 18 19 	36 37 38 39 40 41 42 43
	//1 -> leonard	= 2 	8 9 		20 21 22 23		44 45 46 47 48 49 50 51
	//2 -> penny 		= 3 	10 11 	24 25 26 27		52 53 54 55 56 57 58 59
	//3 -> rajesh 	= 4 	12 13 	28 29 30 31		60 61 62 63 64 65 66 67
	//4 -> howard 	= 5 	14 15 	32 33 34 35		68 69 70 71 72 73 74 75
	n--;
	string ans = "";
	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	//vector<string> preplace(n + 5, "");
	int start = 5;
	for (int i = 0; i < 5; i++) {
		int exp = -1;
		for (int j = i; j < n + 2; j += (start * (1 << exp))) {
			if (n >= j && n < j + (1 << (exp + 1))) {
				ans = names[i];
			}
			if (ans != "") {
				break;
			}
			//for (int rep = 0; rep < (1 << (exp + 1)); rep++) {
				//preplace[j + rep] = names[i];
				//cout << j + rep + 1 << " = " << preplace[j + rep] << '\n';
			//}
			exp++;
		}
		if (ans != "") {
			break;
		}
		start++;
	}
	
	//for (int i = 0; i < n + 2; i++) {
		//cout << i << " = " << preplace[i] << '\n';
	//}
	
	cout << ans << '\n';
	
	return 0;
}
