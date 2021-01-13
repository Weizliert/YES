#include<iostream>
#include <string>
#include <algorithm>
#include <map>
 
using namespace std;
 
bool check(char c) {
	if (c >= '0' && c <= '9') return true;
	if (c >= 'A' && c <= 'Z') return true;
	if (c >= 'a' && c <= 'z') return true;
	return false;
}
 
void SpeechPatterns() {
	map<string, int> res;
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	for (int i = 0; i < str.size(); ) {
		while (!check(str[i])&& i < str.size()) {
			i++;
		}
		string temp;
		while (check(str[i])&& i < str.size()){
			temp += str[i];
			i++;
		}
		res[temp]++;
	}
	pair<string, int> ans;
	for (map<string, int>::iterator it = res.begin(); it != res.end(); it++) {
		if (ans.second < it->second) {
			ans.first = it->first;
			ans.second = it->second;
		}
	}
	cout << ans.first<<":"<<ans.second;
}
	

