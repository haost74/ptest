#pragma once

#include <iostream>
#include <vector>
#include "nTree/Node.hpp"

namespace word_m
{
    using std::vector;
    using namespace nTree;

    template <class T>
    class wprd
    {
    private:
        Node<T> *root;
        vector<Node<T>> vt;

    public:
        wprd(T data)
        {
            vt.push_back(Node<T>::newNodeNew(data));
            root = &vt[0];
        }
        // ~wprd() {delete root;}

        // ------- get size ---------
        size_t getSize() { return vt.size(); }

        // ------- get root data ---------
        T getRoot()
        {
            return vt[0].getData();
        }

        void insertNode(T data, int i = 0)
        {
            vt.push_back(Node<T>::newNodeNew(data));
            if (i < vt.size())
            {
                Node<T> *tr = &vt[vt.size() - 1];
                vt[i].insertFriend(tr);
            }
        }

        size_t getCountFrends(int i)
        {
            return vt[i].getCountFriens();
        }
    };
}