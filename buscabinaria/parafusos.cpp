#include<bits/stdc++.h>
using namespace std;
int n, it;
vector<int> a;
int buscabinaria1(int consulta){
    int hi = it, lo = 0, mid;
    while(lo < hi){
        mid = lo+(hi-lo)/2;
        if(a[mid] <= consulta){
            lo = mid+1;
        }else{
            hi = mid;
        }
    }
    return lo;
}
int main(){
    cin >> n;
    int it = 0;
    while(n--){
        int p1, p2;
        cin >> p1 >> p2;
        for(int i = p1; i <= p2; i++, it++){
            a[it] = i;
        }
    }
    cout << it << endl;
    sort(a.begin(), a.end());
    for(int i = 0;i < 9; i++){
        cout << a[i] << " ";
    }cout << endl;
    int num;
    cin >> num;
    cout << buscabinaria1(num) << endl;
    return 0;
}