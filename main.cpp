#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "Data.h"
#include "Greedy.h"
#include "Astar.h"

using namespace std;

int main()
{
    memset(road, 0, sizeof(road));
    ifstream infile;
    infile.open("C:\\Users\\Air Chrysalis\\Desktop\\code\\city_go\\data.in");
    if (!infile.is_open())
    {
        cout<<"Please modify the file path of data.in on the 15th line of main.cpp. Thank you! "<<endl;
    }
    else
    {
        for (int i=0; i<23; i++)
        {
            string a, b;
            int len;
            infile>>a>>b>>len;
            int numa, numb;
            for (int j=0; j<20; j++)
            {
                if (a == city[j]) numa = j;
                if (b == city[j]) numb = j;
            }
            road[numa][numb] = len;
            road[numb][numa] = len;
            //cout<<'{'<<numa<<", "<<numb<<", "<<len<<"},"<<endl;
        }
        Greedy greedy_solver(0, 1);
        greedy_solver.solve();
        cout<<"Greedy:"<<endl;
        greedy_solver.print();

        Astar astar_solover(0, 1);
        astar_solover.solve();
        cout<<"A-Star:"<<endl;
        astar_solover.print();
    }
    return 0;
}
