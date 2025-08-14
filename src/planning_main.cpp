#include <iostream>
#include "process.h"
#include "show_result.h"

using namespace std;

int main() 
{
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();

    cout << "planning finished" << endl;

    cout << "show result:" << endl;
    Show_Result show;
    show.showResult();
    
    return 0;
}