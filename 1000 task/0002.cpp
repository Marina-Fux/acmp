// 2. Сумма
// Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>0)
    cout << n*(n+1) /2;
    else 
    cout << -n*(n-1)/2+1;
}
