#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
	vector<int> par,size;
    public:
	DisjointSet(int n){
		par.resize(n+1);
		size.resize(n+1,1);
		for(int i = 0 ; i <= n ; i++) par[i] = i;
	}
	void Union(int a,int b){
		int uParA = findPar(a);
		int uParB = findPar(b);
		if(uParA == uParB) return;
		if(size[uParA] >= size[uParB]){
			par[uParB] = uParA;
			size[uParA] += size[uParB];
		}
		else{
			par[uParA] = uParB;
			size[uParB] += size[uParA];
		}
	}
	int findPar(int n){
		if(par[n] == n) return n;
		return par[n] = findPar(par[n]);
	}
};
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int n;

	return 0;
}