#ifndef SAMPLENODE_H
#define SAMPLENODE_H

#include <Node.h>
namespace android{
class SampleNode : public Node
{
    public:
        SampleNode();
        virtual ~SampleNode();
        static SampleNode* create();
    protected:

    private:
};
}
#endif // SAMPLENODE_H
