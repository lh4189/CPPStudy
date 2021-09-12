#include "SampleNode.h"

using namespace::android;
SampleNode::SampleNode()
{
    //ctor
}

SampleNode::~SampleNode()
{
    //dtor
}

SampleNode* SampleNode::create()
{
    SampleNode *pNode = new SampleNode;
    return pNode;
}
