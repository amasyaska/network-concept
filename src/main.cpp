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
	
	HubDebug hub;
	Node ptr_node1;
	Node ptr_node2;

	hub.add_node(&ptr_node1);
	hub.get_nodes_to_str();
	hub.add_node(&ptr_node2);
	hub.get_nodes_to_str();
}
