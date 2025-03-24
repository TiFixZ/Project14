#include <iostream>
#include <iomanip>

using namespace std;

const double a = 0.05;
const int b = 5;

struct c {
    string d;
    double e;
};

void f(const c g[]) {
    cout << "Валюты:\n";
    for (int h = 0; h < b; ++h) {
        cout << h + 1 << ". " << g[h].d << " (Курс: " << g[h].e << ")\n";
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    c i[b] = {
        {"Доллар", 90.5},
        {"Евро", 98.7},
        {"Юань", 12.4},
        {"Фарит", 200.0},
        {"Йена", 0.65}
    };

    char j = 'д';
    while (j == 'д' || j == 'Д') {
        double k;
        cout << "Рубли: ";
        cin >> k;

        f(i);

        int l;
        cout << "Число: ";
        cin >> l;

        if (l < 1 || l > b) {
            cout << "Ошибка!\n";
            continue;
        }

        double m = k * a;
        double n = k - m;
        double o = n / i[l - 1].e;

        cout << fixed << setprecision(2);
        cout << "Банк взял: " << m << " руб.\n";
        cout << "Ваши деньги: " << o << " " << i[l - 1].d << "(ов)\n";

        cout << "Еще?: ";
        cin >> j;
    }

    cout << "Иди отравись)" << endl;
    return 0;
}
