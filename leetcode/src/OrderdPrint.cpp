#include "Solution.h"

// L1114
void Solution_Orderd_Print::first(std::function<void()> printFirst) {
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    k = 1;
    cv.notify_all();
}

void Solution_Orderd_Print::second(std::function<void()> printSecond) {
    // printSecond() outputs "second". Do not change or remove this line.
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [this]() { return k == 1; });
    printSecond();
    k = 2;
    cv.notify_one();
}

void Solution_Orderd_Print::third(std::function<void()> printThird) {
    // printThird() outputs "third". Do not change or remove this line.
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [this]() {return k == 2; });
    printThird();
}
