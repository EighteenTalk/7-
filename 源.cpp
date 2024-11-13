#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define LL long long
#define maxn 10010
int a[maxn];
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	int rest = n % k, set = n / k;
	LL max = 0;
	for (int i = 1; i <= set; i++)max += a[i];
	max = max * k + a[set + 1] * rest;
	cout << max;
	return 0;

}
/*#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define LL long long
#define maxn 30200
using namespace std;
int a[maxn], b[maxn][10010] = { 0 };
int main() {
	int n;
	cin >> n;
	int x,cnt=1;
	
	for (int i = 1; i <= n; i++) {
		cin >> x;
		a[x]++;
		if (b[x][0] == 0) {
			b[0][cnt++] = x;
			b[x][0]++;
		}
	}
	int ma = a[b[0][1]], mas[10020] = { 0 },cntm=2;
	mas[1] = b[0][1];
	for (int i = 2; i <= cnt - 1; i++) {
		if (a[b[0][i]] > ma) {
			ma = a[b[0][i]];
			cntm = 1;
			mas[cntm++] = b[0][i];
		}
		else if (a[b[0][i]] == ma) {
			mas[cntm++] = b[0][i];
		}
	}
	sort(mas + 1, mas + cntm);
	for (int i = 1; i < cntm; i++)cout << mas[i] << ' ' << ma << endl;
	return 0;
}*/
/*void qsort(int f, int l) {
	if (f == l) {
		return;
	}
	int i = f, j = l,m=a[(f+l)/2],swp;
	do {
		while (a[i] < m)i++;
		while (a[j] > m)j--;
		if (i <= j) {
			swp = a[i];
			a[i] = a[j]; a[j] = swp;
			i++, j--;
		}

	} while (i <= j);
	if (k<=j)qsort(f, j);
	else if (k >= i)qsort(i, l);
	else qsort(j+1, i-1);
}*/