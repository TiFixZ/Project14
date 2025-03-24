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
    cout << "������:\n";
    for (int h = 0; h < b; ++h) {
        cout << h + 1 << ". " << g[h].d << " (����: " << g[h].e << ")\n";
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    c i[b] = {
        {"������", 90.5},
        {"����", 98.7},
        {"����", 12.4},
        {"�����", 200.0},
        {"����", 0.65}
    };

    char j = '�';
    while (j == '�' || j == '�') {
        double k;
        cout << "�����: ";
        cin >> k;

        f(i);

        int l;
        cout << "�����: ";
        cin >> l;

        if (l < 1 || l > b) {
            cout << "������!\n";
            continue;
        }

        double m = k * a;
        double n = k - m;
        double o = n / i[l - 1].e;

        cout << fixed << setprecision(2);
        cout << "���� ����: " << m << " ���.\n";
        cout << "���� ������: " << o << " " << i[l - 1].d << "(��)\n";

        cout << "���?: ";
        cin >> j;
    }

    cout << "��� ��������)" << endl;
    return 0;
}
