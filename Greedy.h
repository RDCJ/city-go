#ifndef SOLVER_H
#define SOLVER_H
#include "State.h"
#include <queue>
#include <iostream>

using namespace std;

class Greedy
{
    public:
        Greedy(int start, int end);
        void solve();
        void print() {ansState.print();};

    private:
        int _start, _end;
        int ans;
        State ansState;

};
#endif // SOLVER_H
