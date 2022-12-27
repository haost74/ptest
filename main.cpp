#include <iostream>
#include "src/WordTree.hpp"
#include "src/nTree/Node.hpp"

#include <chrono>
#include <thread>

int main(int argc, char *argv[])
{

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    word_m::wprd<int> *d = new word_m::wprd<int>(10);
    std::cout << " size = " << d->getSize() << '\n';
    auto p = d->getRoot();
    std::cout << " get root = " << p << '\n';
    d->insertNode(50, 0);
    d->insertNode(77, 1);
    std::cout << " count frends = " << d->getCountFrends(0) << '\n';
    std::cout << " size = " << d->getSize() << '\n';
    delete d;

    return 0;
}