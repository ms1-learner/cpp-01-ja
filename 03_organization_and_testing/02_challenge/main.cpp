#include <iostream>
#include <thread>
//スレッドローカローカルストレージ



int main() {
    thread_local int thread_data = 10;
    std::cout << thread_data << std::endl;
    return 0;
}
