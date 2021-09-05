#include "../msg_bus/msg_bus.h"
#pragma comment(lib,"../../bin/debug/msg_bus.lib")
#include <iostream>
#include <string>
using namespace std;

#include "service_caller.h"

ServiceCaller::ServiceCaller()
{
}

void ServiceCaller::CallServiceTest()
{
 
    const string msg = "msg";
    Common::GetMessageBus()->SendReq<bool, const string&>(std::move(msg), "ServiceProvider");

    // 匹配所有的无参
    Common::GetMessageBus()->SendReq<void>("ServiceProvider");

    // 匹配静态成员函数
    Common::GetMessageBus()->SendReq<void, int>(12323432, "ServiceProvider");

    // 调用不存在的服务
    Common::GetMessageBus()->SendReq<int, string >(string("123"), "ServiceProvider");

}
