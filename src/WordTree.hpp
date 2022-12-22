#pragma once

#include <iostream>
#include <vector>
#include "nTree/Tree.hpp"

namespace word_m
{
    using std::vector;
    using namespace nTree;

    template <class T>
    class wprd
    {
    private:
        Tree<T> *root;
        vector<Tree<T>> vt;

    public:
        wprd(T data)
        {
            vt.push_back(Tree<T>::newTreeNew(data));
            root = &vt[0];
        }
        ~wprd() {delete root;}

        // ------- get size ---------
        size_t getSize() { return vt.size(); }

        // ------- get root data ---------
        T getRoot()
        {
            return vt[0].getData();
        }

        void insertTreeNode(T data, int i = 0)
        {
           vt.push_back(Tree<T>::newTreeNew(data)); 
           if(i < vt.size())   
           {    
             Tree<T> * tr = &vt[vt.size() - 1];
             vt[i].insertFriend(tr);
           }
        }

        size_t getCountFrends(int i)
        {
            return vt[i].getCountFriens();
        }
    };
}