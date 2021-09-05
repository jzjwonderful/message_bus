#include "msg_bus.h"

Common::Common()
{
}

MessageBus* Common::GetMessageBus()
{
    static auto msgBus = new MessageBus;
    return msgBus;
}
