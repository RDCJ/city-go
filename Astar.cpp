#include "Astar.h"

struct astar_cmp
{
    bool operator()(State const &st1, State const &st2)
    {
        return st1.Astar_priority() > st2.Astar_priority();
    }
};

Astar::Astar(int start, int end):ansState(0)
{
    _start = start;
    _end = end;
    ans = 1000000;
}

void Astar::solve()
{
    State fst_st(_start);
    priority_queue<State, vector<State>, astar_cmp> que;
    que.push(fst_st);
    while (!que.empty())
    {
        State crnt_st = que.top();
        que.pop();
        if (crnt_st.getLastCity() == _end)
        {
            ansState = crnt_st;
            break;
        }
        for (int i=0; i<20; i++)
        {
            if (road[crnt_st.getLastCity()][i] == 0) continue;
            State child_st = crnt_st.move(i);
            que.push(child_st);
        }
    }
}


