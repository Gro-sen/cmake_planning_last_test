#include <iostream>
#include "show_result.h"
#include <graphics.h>
using namespace std;

void Show_Result::showResult()
{
    initgraph(800, 800);
    setbkcolor(WHITE);
    cleardevice();
    cout << "draw circles" << endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(400, 400, 200);
    circle(400, 400, 300);
    system("pause");
    closegraph();
}