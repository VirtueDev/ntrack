#pragma once

#include <irrlicht.h>
#include <WinSock2.h>

using namespace irr;
using namespace core;
namespace ntrack_g{
	class NetworkManager
	{
	public:
		NetworkManager();
		~NetworkManager();

		void setHostname(const char*);
		void setPort(const char*);

		void connectToServer();
		void openServer();

		void sendData(char*);
		char* receiveData();

		void acceptClient();

		void run();
	};

}//namespace ntrack_g
