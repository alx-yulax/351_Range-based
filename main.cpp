#include <iostream>
#include <vector>

class Simple {
    std::vector<int> vec;
public:
    Simple(std::initializer_list<int> initDigits) {
        vec = initDigits;
    }
    void show() {
        for (auto &digit: vec) {
            std::cout << digit << std::endl;
        }
    }
};

int main() {
    Simple digits = {1,2,3,4,5};
    digits.show();
    return 0;
}
