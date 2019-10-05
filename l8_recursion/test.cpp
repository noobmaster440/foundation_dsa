#include <iostream>
using namespace std;

void printDec(int st, int end) {
    if (st == end + 1) {
        return;
    }
    printDec(st + 1, end);
    cout << st << endl;
}

void printInc(int st, int end) {
    if (st == end + 1) {
        return;
    }
    cout << st << endl;
    printInc(st + 1, end);
}

int printDecWithReturnType2(int start, int end) {
    if (start == end) {
        cout << start << " ";
        return start - 1;
    }
    int res = printDecWithReturnType2(start + 1, end);
    cout << res << " ";
    return res - 1;
}


int printDecWithReturnType(int start, int end) {
    if (start == end) {
        return start;
    }
    int res = printDecWithReturnType(start + 1, end);
    cout << res << " ";
    return res - 1;
}

int getFact(int n) {
    if (n <= 1) {
        return 1;
    }
    int res = getFact(n - 1);
    return res * n;
}

int main(int ag, char ** jksh) {
    int st = 1,
    end = 10;
    // cin >> st >> end;
    // printDec(st, end);
    // printInc(st, end);
    // printDecWithReturnType2(st, end);
    // cout << printDecWithReturnType(st, end);
    return 0;
}
