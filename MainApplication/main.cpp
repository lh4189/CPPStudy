#include <iostream>
#include "include/Utils.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x =1;
    LOGI("Hello world! x: %d", x);
    LOGE("Hello world! x: %d", x);
    return 0;
}
