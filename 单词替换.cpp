#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a[105];
int main() {
	string s;
	int n = 0;
	while (cin >> s) a[++n] = s;//a[++n]=s;��ͬ��n++;a[n]=s;
	for (int i = 1; i <= n - 2; i++) {//ע�⣬�����ʱ���뱻�滻�ĵ��ʷ����� n-1 ��λ�ã��滻�ĵ��ʷ����� n ��λ�ã�����ѭ��һֱ�� n-2 ���ɡ�
		if (a[i] == a[n - 1]) cout << a[n] << " ";//�жϵ�Ҫ���滻�ĵ��ʾ�����滻���ĵ��ʡ�
		else cout << a[i] << " ";
	}
	return 0;
}