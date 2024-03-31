class Client
{
public:
	Client(void);
	int send_request(const Hub &hub, const std::string &request);
}
