#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a[105];
int main() {
	string s;
	int n = 0;
	while (cin >> s) a[++n] = s;//a[++n]=s;等同于n++;a[n]=s;
	for (int i = 1; i <= n - 2; i++) {//注意，读入的时候将想被替换的单词放在了 n-1 的位置，替换的单词放在了 n 的位置，所以循环一直到 n-2 即可。
		if (a[i] == a[n - 1]) cout << a[n] << " ";//判断到要被替换的单词就输出替换它的单词。
		else cout << a[i] << " ";
	}
	return 0;
}