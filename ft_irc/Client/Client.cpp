#include "Client.hpp"

Client::Client(int clntfd) : _nickname(""), _username(""), _isInit(false), _password("") {
	_clntfd = clntfd;
	_joinList = vector<Channel *>();
}

void Client::addChannel(Channel *ch) {
	for (int i = 0; i < (int)_joinList.size(); i++) {
		if (_joinList[i]->getChannelName() == ch->getChannelName())
			return;
	}
	_joinList.push_back(ch);
}

void Client::delChannel(string ch_name, bool isrec) {
	for (int i = 0; i < (int)_joinList.size(); i++) {
		if (_joinList[i]->getChannelName() == ch_name) {
			if (!isrec)
				_joinList[i]->delMember(_nickname, true);
			_joinList.erase(_joinList.begin() + i);
		}
	}
}

void Client::delAllChannel() {
	for (int i = 0; i < (int)_joinList.size(); i++) 
		_joinList[i]->delMember(_nickname, true);
}

void	Client::setInit(bool flag) { _isInit = flag; }

void Client::setNickname(string nickname) { _nickname = nickname; }

void Client::setUsername(string username) { _username = username; }

void Client::setPassword(string password) { _password = password; }

bool	Client::getInit() { return _isInit; }

int Client::getClntfd() { return _clntfd; }

string Client::getNickname() { return _nickname; }

string Client::getUsername() { return _username; }

vector<Channel *> Client::getJoinList() { return _joinList; }

string Client::getPassword() { return _password; }
