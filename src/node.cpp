Node::Node()
{
	this->hub_ptr = nullptr;
}

Node::~Node()
{
}

Node::get_hub()
{
	if (this->hub_ptr == nullptr)
	{
		// throw exception
	}
	return this->hub_ptr;
}
