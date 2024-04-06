#include <vector>
#include <iostream>
#include <utility>
#include <string>

// libs

#include "node.hpp"
#include "node.cpp"
#include "hub.hpp"
#include "hub.cpp"

#include "hub_debug.hpp"
#include "hub_debug.cpp"


int main()
{
	std::cout << ERROR_ADDING << std::endl;
	
	HubDebug *ptr_hub = new HubDebug();
	Node *ptr_node1 = new Node();
	Node *ptr_node2 = new Node();
	ptr_hub->add_node(ptr_node1);
	ptr_hub->get_nodes_to_str();
	ptr_hub->add_node(ptr_node2);
	ptr_hub->get_nodes_to_str();
}
