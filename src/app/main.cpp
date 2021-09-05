#include <QtCore/QCoreApplication>
#include "../service_caller/service_caller.h"
#include "../service_provider/service_provider.h"
#pragma comment(lib,"../../bin/debug/service_provider.lib")
#pragma comment(lib,"../../bin/debug/service_caller.lib")
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //服务提供方
    ServiceProvider sp;
    // 在向msg_bus注册可用服务
    sp.Init();

    //服务调用方
    ServiceCaller sc;

    // 从msg_bus调用服务
    sc.CallServiceTest();

    return a.exec();
}
