#include <iostream>
#include <string>
#include <windows.h>
#include "VxmDriver.h"
#include "commons.h"
using namespace std;

int main() {
    init();
    cout << MotorPosition(1) << endl;
	cleanup();
    return 0;
}