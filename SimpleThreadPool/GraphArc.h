#ifndef GRAPHARC_H
#define GRAPHARC_H

#include "GraphNode.h"

template<class NodeType, class ArcType>
class GraphArc
{
private:

    GraphNode<NodeType, ArcType>* m_node;

    ArcType m_weight;

public:

    // Accessor functions
    GraphNode<NodeType, ArcType>* node() const
    {
        return m_node;
    }

    ArcType weight() const
    {
        return m_weight;
    }

    // Manipulator functions
    void setNode(GraphNode<NodeType, ArcType>* node)
    {
        m_node = node;
    }

    void setWeight(ArcType weight)
    {
        m_weight = weight;
    }

};
#endif
