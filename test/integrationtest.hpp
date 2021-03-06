#pragma once

#include "../examples/inmemoryconnector.hpp"
#include "catch/catch.hpp"
#include <jsonrpccxx/client.hpp>
#include <jsonrpccxx/server.hpp>

using namespace jsonrpccxx;

namespace Test
{
	namespace IntegrationTest
	{
		struct IntegrationTest {
		  IntegrationTest() : connector(rpcServer), client(connector, version::v2) {}
		  JsonRpc2Server rpcServer;
		  InMemoryConnector connector;
		  JsonRpcClient client;
		};
	}
}
