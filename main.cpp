#include <iostream>
#include "src/WordTree.hpp"
#include "src/nTree/Tree.hpp"

int main(int argc, char *argv[])
{

    word_m::wprd<int> *d = new word_m::wprd<int>(10);


    std::cout << "size = " << d->getSize() << '\n';

    auto p = d->getRoot();

    std::cout << "get root = " << p << '\n';

    d->insertTreeNode(50, 0);
    d->insertTreeNode(77, 1);

    std::cout << d->getCountFrends(0) << '\n';

    std::cout << "size = " << d->getSize() << '\n';

    delete d;
    return 0;
}