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

    // ƥ�����е��޲�
    Common::GetMessageBus()->SendReq<void>("ServiceProvider");

    // ƥ�侲̬��Ա����
    Common::GetMessageBus()->SendReq<void, int>(12323432, "ServiceProvider");

    // ���ò����ڵķ���
    Common::GetMessageBus()->SendReq<int, string >(string("123"), "ServiceProvider");

}
