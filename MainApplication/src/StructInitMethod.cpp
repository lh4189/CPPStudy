#include "StructInitMethod.h"
#include "Utils.h"
StructInitMethod::StructInitMethod()
{
    //ctor
    NodeList testNodeList = {0};
    testNodeList.width = 100;
    //testNodeList.height = 100;
    LOGI("width: %d, height: %d, pNode: %p, %p", testNodeList.width, testNodeList.height, testNodeList.pNode[0], testNodeList.pNode[1]);
}

StructInitMethod::~StructInitMethod()
{
    //dtor
}
