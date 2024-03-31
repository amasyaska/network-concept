class Hub
{
public:
	Hub(void);
	int get_request(Client const *client, Request const &request);
	int send_request(Server const *server, Request const &request);
}
