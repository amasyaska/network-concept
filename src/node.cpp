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
		// throw exception
	}
	return this->hub_ptr;
}
