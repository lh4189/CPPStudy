#include "NodeFactory.h"
#include <SampleNode.h>
#include <stdio.h>
#include <iostream>
using namespace::android;
NodeFactory::NodeFactory()
{
    //ctor
}

NodeFactory::~NodeFactory()
{
    //dtor
}
NodeFactory* NodeFactory::create()
{
    NodeFactory *pNode = new NodeFactory;
    return pNode;
}
Node* NodeFactory::createNodeObj()
{
    Node *pNode = SampleNode::create();
    return pNode;
}
