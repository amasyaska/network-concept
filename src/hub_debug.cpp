std::string HubDebug::get_nodes_to_str(void)
{
	std::string nodes_to_str = "";
	for (int i = 0; i < this->container.size(); i++)
	{
		std::cout << "node " << this->container[i].first << ", address: " << this->container[i].second << std::endl;
	}
	return nodes_to_str;
}
