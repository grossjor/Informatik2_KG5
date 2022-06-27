#include <iostream>
#include <thread>
using namespace std;
int main() {
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << "  Prozessorkerne sind in ihrem System vorhanden.\n";
}
