// magic numbers

#define ERROR_ADDING 0
#define SUCCESSFUL_ADDING 1

class Hub
{
	/*
	 * this class is a container for nodes
	 */
public:
	Hub(void);
	void ~Hub(void);

	int add_node(Node const *ptr_node);
}
