#include <iostream>
// 1、宏常量
#define day 7

int main() {
    std::cout << "d一周里总共有 " << day << std::endl;
    // day = 8; // 错误，day是常量，不能被修改
    return 0;
}