
// https://www.beecrowd.com.br/judge/pt/problems/view/3147

#include <iostream>
using namespace std;

int main() {
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w >> x;
    if ((h + e + a + x) > (o + w))
        cout << "Middle-earth is safe." << endl;
    else
        cout << "Sauron has returned." << endl;
}