#include<bits/stdc++.h>
using namespace std;

int main(){
	string binario;
	int m;
	cin >> binario >> m;
	vector<int> ans;
	while(m--){
		int num;
		cin >> num;
		int resto = 0;
		for(int i = 0; i < binario.size(); i++){
			resto = ((resto%num) + binario[i] - '0') % num;
			resto *= 2;
		}
		if(resto == 0){
			ans.push_back(num);
		}
	}
	if(ans.size()){
		sort(ans.begin(), ans.end());
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i];
			cout << (i < ans.size()-1? " ":"\n");
		}
	}else cout << "Nenhum\n";
	
	return 0;	
}