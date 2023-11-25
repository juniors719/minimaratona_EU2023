
// https://www.beecrowd.com.br/judge/pt/problems/view/2958

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> vida, disc;
    int linhas, colunas;
    cin >> linhas >> colunas;
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            string palavra;
            cin >> palavra;
            if (palavra[1] == 'V')
                vida.push_back(palavra);
            else
                disc.push_back(palavra);
        }
    }
    sort(vida.begin(), vida.end());
    sort(disc.begin(), disc.end());
    for (int i = vida.size() - 1; i >= 0; i--)
        cout << vida.at(i) << endl;
    for (int i = disc.size() - 1; i >= 0; i--)
        cout << disc.at(i) << endl;
    return 0;
}