#ifndef NODEFACTORY_H
#define NODEFACTORY_H

#include <Node.h>
namespace android{
class NodeFactory
{
    public:
        NodeFactory();
        virtual ~NodeFactory();
        static NodeFactory* create();
        Node* createNodeObj();
    protected:

    private:
};
}
#endif // NODEFACTORY_H
