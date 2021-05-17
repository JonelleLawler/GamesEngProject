#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <list>
#include <SFML/Graphics.hpp>

template <typename NodeType, typename ArcType> class GraphArc;

template<class NodeType, class ArcType>
class GraphNode
{
public:
	typedef GraphArc<NodeType, ArcType> Arc;
	typedef GraphNode<NodeType, ArcType> Node;

	GraphNode(Node* previous = 0) : m_previous(previous) {}

	std::list<Arc> const& arcList() const
	{
		return m_arcList;
	}

	bool marked() const
	{
		return m_marked;
	}

	Node* previous() const
	{
		return m_previous;
	}

	void setMarked(bool mark)
	{
		m_marked = mark;
	}

	void setPrevious(Node* previous)
	{
		m_previous = previous;
	}

	Arc* getArc(Node* node);
	void addArc(Node* node, ArcType weight);
	void removeArc(Node* node);

	NodeType m_data;

private:
	std::list<Arc> m_arcList;

	bool m_marked;

	Node* m_previous;
};

template<typename NodeType, typename ArcType>
GraphArc<NodeType, ArcType>* GraphNode<NodeType, ArcType>::getArc(Node* node)
{

	auto iter = m_arcList.begin();
	auto endIter = m_arcList.end();
	Arc* arc = 0;

	// find the arc that matches the node
	for (; iter != endIter && nullptr == arc; ++iter)
	{
		if ((*iter).node() == node)
		{
			arc = &((*iter));
		}
	}

	// returns nullptr if not found
	return arc;
}


template<typename NodeType, typename ArcType>
void GraphNode<NodeType, ArcType>::addArc(Node* node, ArcType weight)
{
	// Create a new arc.
	Arc a;
	a.setNode(node);
	a.setWeight(weight);
	// Add it to the arc list.
	m_arcList.push_back(a);
}

template<typename NodeType, typename ArcType>
void GraphNode<NodeType, ArcType>::removeArc(Node* node)
{
	auto iter = m_arcList.begin();
	auto endIter = m_arcList.end();

	int size = m_arcList.size();
	// find the arc that matches the node
	for (; iter != endIter && m_arcList.size() == size; ++iter)
	{
		if ((*iter).node() == node)
		{
			m_arcList.remove((*iter));
		}
	}
}

#include "GraphArc.h"

#endif