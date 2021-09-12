#include "Pipeline.h"
#include "Node.h"
#include "NodeFactory.h"
#include <Utils.h>
using namespace::android;
Pipeline::Pipeline()
{
    //ctor
    NodeFactory *m_pFactory = NodeFactory::create();
    Node *mNode = m_pFactory->createNodeObj();
    LOGI("pNode: %p", mNode);
}

Pipeline::~Pipeline()
{
    //dtor
}
