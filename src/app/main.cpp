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

    //�����ṩ��
    ServiceProvider sp;
    // ����msg_busע����÷���
    sp.Init();

    //������÷�
    ServiceCaller sc;

    // ��msg_bus���÷���
    sc.CallServiceTest();

    return a.exec();
}
