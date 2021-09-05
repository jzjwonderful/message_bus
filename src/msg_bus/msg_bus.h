#pragma once

#include "msg_bus_global.h"
#include "../../third_party/cosmos/MessageBus.hpp"

class MSG_BUS_EXPORT Common
{
public:
    Common();

    static MessageBus* GetMessageBus();
};
