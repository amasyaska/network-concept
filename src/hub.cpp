int Hub::add_node(Node const *ptr_node)
{
	// adds pair and increments address_top
	try
	{
		this->container.push_back(std::make_pair(ptr_node, this->address_top));
		this->address_top = this->address_top + 1;
		return SUCCESSFUL_ADDING;
	}
	catch(...)
	{
		return ERROR_ADDING;
	}
}
