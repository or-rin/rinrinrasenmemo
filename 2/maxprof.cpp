#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int maxv = -100000000;
    int minv,temp,n;
    cin >> n >> minv;     //データ数nと最小値のロード
    for (int i = 0; i < n; i++){
        cin >> temp;
        maxv = max(maxv,temp - minv);   //maxvをそのまま出力したいのでminvは最小値、maxvは最大差に
        minv = min(minv, temp);
    }
    cout << maxv << endl;

    return 0;
}