#include <iostream>
using namespace std;

int check() {
    int N;
    cin>> N;
    while (N <= 1) {
        cout << "Ошибка. Массив не может состоять из такого кол - ва эллементов. Пожалуйста повторите.";
        cin >> N;
    }
    return N;
}

void bubble(int* a, int n) {
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    cout << "-------------------\n";
    int m=n;
    while (m != 0) {
        for (int j = 1; j < m; j++) {
            if (b[j] < b[j - 1]) {
                swap(b[j], b[j - 1]);
                for (int i = 0; i < n; i++) {
                    cout << b[i] << " ";
                }
                cout << endl;
            }
        }
        m--;
    }
    cout << "-------------------\n";
    cout << "Результат работы сортировки пузырками: \n";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

void inserts(int* a, int n) {
    int* c = new int[n];
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    cout << "-------------------\n";
    int m = n;
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && c[j] < c[j - 1]; j--) {
            swap(c[j], c[j - 1]);
            for (int u = 0; u < n; u++) {
                cout << c[u] << " ";
            }
            cout << endl;
        }
    }
    cout << "-------------------\n";
    cout << "Результат работы сортировки вставками: \n";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Колличество элементов: ";
    int n = check();
    int* a = new int [n];
    cout << "Введите " << n << " эллементов. \n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    bubble(a, n);
    inserts(a, n);
}