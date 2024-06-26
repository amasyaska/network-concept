class Node
{
private:
	Hub * hub_ptr;
protected:
	int set_hub_pointer(Hub * new_hub_ptr);
public:
	Node();
	~Node();
	Hub * get_hub_pointer();

	friend class Hub;
};
