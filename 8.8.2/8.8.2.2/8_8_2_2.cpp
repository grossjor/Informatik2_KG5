#include <iostream>
#include <thread>
using namespace std;
int main() {
    cout<<std::this_thread::get_id()<<endl;
}
