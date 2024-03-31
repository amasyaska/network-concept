class Client
{
public:
	Client(void);
	int send_request(Hub const &hub, Request const &request);
}
