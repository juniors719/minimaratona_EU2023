
// https://www.beecrowd.com.br/judge/pt/problems/view/3303

#include <iostream>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    if (palavra.size() >= 10)
        cout << "palavrao\n";
    else
        cout << "palavrinha\n";
}