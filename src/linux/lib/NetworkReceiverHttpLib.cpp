#include "NetworkReceiverHttpLib.h"

#include <iostream>

namespace omni
{
//private
//protected
//public
    NetworkReceiverHttpLib::NetworkReceiverHttpLib(unsigned short port):
        m_Server(),
        m_nPort(port)
    {
        m_JsonBuffer[0] = 0; 
    }

    NetworkReceiverHttpLib::~NetworkReceiverHttpLib()
    {

    }

    void NetworkReceiverHttpLib::init()
    {
        m_Server.Post("/", [](const auto& req, auto& res)
        {
            res.set_content("ok", "text/plain");
        });

        m_Server.listen("localhost", port);
    }

    void NetworkReceiverHttpLib::run()
    {

    }

    const char* NetworkReceiverHttpLib::getJsonString()
    {
        return nullptr;
    }
}
