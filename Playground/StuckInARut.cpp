#include <iostream>
using namespace std;

const int Infinity = 1000000001;

struct Cow {
    int time_stopped;
    int x, y, xdir, ydir;
};

struct cross {
    int x, y, t;
};

int N;
Cow C[50];


int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        char dir;
        cin >> dir >> C[i].x >> C[i].y;
        if (dir == 'N')C[i].xdir = 0; C[i].ydir = 1;
        if (dir == 'E')C[i].xdir = 1; C[i].ydir = 0;
        if (dir == 'S')C[i].xdir = 0; C[i].ydir = -1;
        if (dir == 'W')C[i].xdir = -1; C[i].ydir = 0;
        C[i].time_stopped = Infinity;
    }
}




