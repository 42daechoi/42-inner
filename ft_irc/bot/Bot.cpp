#include "Bot.hpp"

Bot::Bot(string msg) {
	int i, j;

	i = msg.find("!");
	_nickname = msg.substr(1, i - 2);
	j = msg.find("@");
	_username = msg.substr(i + 1, j - i);
	i = msg.find(" ");
	_ip = msg.substr(j + 1, i - j);
	i = msg.find(":", 2);
	_msg = msg.substr(i + 1, msg.length() - i + 1);

	cout << "nickname: " << _nickname << endl;
	cout << "username: " << _username << endl;
	cout << "ip: " << _ip << endl;
	cout << "msg: " << _msg << endl;
}

void Bot::sendToServer(int serverfd) {
	string msg = makeMsg();
	if (send(serverfd, msg.c_str(), msg.length(), 0) == -1) {
		cout << "Error: send error\n";
		exit(1);
	}
}

string Bot::makeMsg() {
	string msg;

	if (_msg == "help")
		msg = "PRIVMSG " + _nickname + " :<COMMAND LIST>\nSUPERJOIN\n";
	else if (_msg == "superjoin")
		msg = "SUPERJOIN " + _nickname;
	else
		msg = "PRIVMSG " + _nickname + " :There is no matching command. Please send me a help message\n";
	return msg;
}