class Node
{
private:
	Hub * const hub_ptr;
public:
	Node();
	~Node();
	Hub * get_hub_pointer();
};
