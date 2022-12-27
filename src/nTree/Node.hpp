#pragma once
#include <iostream>
#include <vector>
using std::vector;

namespace nTree
{
    template <class T>
    class Node
    {
    private:
        T data;
        Node<T> *parent;
        vector<Node<T> *> listFrieds;

    public:
        Node(T data) : data(data), parent(nullptr) {}
        ~Node()
        {
            // delete parent; for(auto d : listFrieds) delete d;
        }

    public:
        static Node<T> newNodeNew(T data)
        {
            return Node<T>(data);
        }

        T getData() { return data; }

        void insertFriend(Node<T> *data)
        {
            listFrieds.push_back(data);
        }

        size_t getCountFriens()
        {
            return listFrieds.size();
        }
    };
}