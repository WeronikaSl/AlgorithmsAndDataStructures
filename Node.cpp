#include "Node.hpp"

Node::Node()
{
}

Node::Node(int valueOfThisNode, Node* locationOfNextNode) : valueOfThisNode(valueOfThisNode), locationOfNextNode(locationOfNextNode)
{
}
