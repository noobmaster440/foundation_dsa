#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> & arr) {
    for (int i = 0; i < arr.size(); i ++) {
        cin >> arr[i];
    }
}

void display(vector<int> & arr) {
    for (int i = 0; i < arr.size(); i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int NN(vector<int> & arr, int data) {
    int si = 0,
    ei = arr.size() - 1;
    while (si <= ei) {
        int mid = (si + ei) / 2;
        if (data == arr[mid]) {
            return arr[mid];
        } else if (data > arr[mid]) {
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
    }
    if (ei == -1) {
        return arr[0];
    } else if (si == arr.size()) {
        return arr[arr.size() - 1];
    } else if (arr[si] - data > data - arr[ei]) {
        return arr[ei];
    } else {
        return arr[si];
    }
}

int BS(vector<int> & arr, int data) {
    int si = 0,
    ei = arr.size() - 1;
    while (si <= ei) {
        int mid = (si + ei) / 2;
        if (arr[mid] == data) {
            cout << mid << endl;
            return true;
        } else if (arr[mid] > data) {
            ei = mid - 1;
        } else {
            si = mid + 1;
        }
    }
    cout << -1 << endl;
    return false;
}

int LB(vector<int> & arr, int data) {
    int si = 0,
    ei = arr.size() - 1;
    while (si <= ei) {
        int mid = (si + ei) / 2;
        if (arr[mid] == data) {
            if (mid == 0 || arr[mid] != arr[mid - 1]) {
                return mid;
            } else {
                ei = mid - 1;
            }
        } else if (arr[mid] > data) {
            ei = mid - 1;
        } else {
            si = mid + 1;
        }
    }
    return -1;
}

int UB(vector<int> & arr, int data) {
    int si = 0,
    ei = arr.size() - 1;
    while (si <= ei) {
        int mid = (si + ei) / 2;
        if (arr[mid] == data) {
            if (mid == arr.size() - 1 || arr[mid] != arr[mid + 1]) {
                return mid;
            } else {
                si = mid + 1;
            }
        } else if (arr[mid] > data) {
            ei = mid - 1;
        } else {
            si = mid + 1;
        }
    }
    return -1;
}

int SR(int data) {
    if (data == 0 || data == 1) {
        return data;
    }
    int si = 0,
    ei = data / 2;
    while (si <= ei) {
        int mid = (si + ei) / 2;
        if (mid * mid == data) {
            return mid;
        } else if (mid * mid > data) {
            ei = mid - 1;
        } else {
            si = mid + 1;
        }
    }
    return ei;
}

int main(int args, char ** argn) {
    // int size = 0,
    // r = 0;
    // cin >> size;
    // vector<int> arr(size, 0);
    // input(arr);
    // display(arr);
    int data = 0;
    cin >> data;
    cout << SR(data);
    return 0;
}
