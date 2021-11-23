#ifndef ASTAR_H
#define ASTAR_H
#include "State.h"
#include<iostream>
#include<queue>
using namespace std;

class Astar
{
    public:
        Astar(int start, int end);
        void solve();
        void print() {ansState.print();};

    private:
        int _start,  _end;
        int ans;
        State ansState;
};

#endif // ASTAR_H
