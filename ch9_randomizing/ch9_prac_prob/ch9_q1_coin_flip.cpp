#include <cstdlib>
#include <ctime>
#include <iostream>

int HeadAndTail(int head, int tail) {
    return rand() % (tail - head + 1) + head;
}

int main() {
    srand(time(nullptr));
    int headcnt = 0, tailcnt = 0;
    for (size_t i = 0; i < 1000; i++) {
        int res = HeadAndTail(0, 1);
        if (res == 0) {
            headcnt++;
            // std::cout << "head" << std::endl;
        } else {
            tailcnt++;
            // std::cout << "tail" << std::endl;
        }
    }
    std::cout << "After 1000 flips of the coin, the statistic data is as follows: \n";
    std::cout << "The coin flip shows: " << headcnt << " side of the head.\n";
    std::cout << "The coin flip shows: " << tailcnt << " side of the tail.\n";
    return 0;
}
