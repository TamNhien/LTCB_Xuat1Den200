#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 200; ++i) {
        cout << i << " ";
        // In mỗi số, sau đó thêm một khoảng trắng
        if (i % 20 == 0) {
            cout << endl; // Xuống dòng sau mỗi 20 số
        }
    }
    return 0;
}
