#pragma once
#include <iostream>
#include <vector>
using std::vector;

namespace nTree
{
    template <class T>
    class Tree
    {
    private:
        T data;
        Tree<T> *parent;
        vector<Tree<T> *> listFrieds;

    public:
        Tree(T data) : data(data), parent(nullptr) {}
        ~Tree()
        {
            // delete parent; for(auto d : listFrieds) delete d;
        }

    public:
        static Tree<T> newTreeNew(T data)
        {
            return Tree<T>(data);
        }

        T getData() { return data; }

        void insertFriend(Tree<T> *data)
        {
            listFrieds.push_back(data);
        }

        size_t getCountFriens()
        {
            return listFrieds.size();
        }
    };
}