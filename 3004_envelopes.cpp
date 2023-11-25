
// https://www.beecrowd.com.br/judge/pt/problems/view/3004

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        short l1{}, b1{}, l2{}, b2{};
        cin >> l1 >> b1 >> l2 >> b2;
        if (((l1 < l2) && (b1 < b2)) || ((l1 < b2) && (b1 < l2)))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}