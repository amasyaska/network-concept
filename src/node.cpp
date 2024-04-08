Node::Node()
{
	this->hub_ptr = nullptr;
}

Node::~Node()
{
}

Node::get_hub_pointer()
{
	if (this->hub_ptr == nullptr)
	{
		throw std::logic_error("No Hub assigned");
	}
	return this->hub_ptr;
}

Node::set_hub_pointer(Hub * new_hub_ptr)
{
	this->hub_ptr = new_hub_ptr;
}
