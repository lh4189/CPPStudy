#include <iostream>
#include "include/Utils.h"

#include <Pipeline.h>
#include "StructInitMethod.h"

using namespace std;
using namespace::android;

int structInitMethod();
int main()
{
    int x =1;
    LOGI("Hello world! x: %d", x);
    LOGE("Hello world! x: %d", x);

    Pipeline* mPipeline = new Pipeline();

    structInitMethod();
    return 0;
}

int structInitMethod()
{
    StructInitMethod *pStructMethod = new StructInitMethod();

    return 0;
}
