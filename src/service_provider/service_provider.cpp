#include "../msg_bus/msg_bus.h"
#pragma comment(lib,"../../bin/debug/msg_bus.lib")
#include <iostream>
using namespace std;

#include "service_provider.h"

void normal_func()
{
    cout << "normal_func===>" << endl;
}

ServiceProvider::ServiceProvider()
{
}

// 在msgbus中注册服务
void ServiceProvider::Init()
{
    // 注册lambda函数
    Common::GetMessageBus()->Attach([=](string msg){
        MemberFunc(msg);
    }, "service1");

    // 注册普通函数
    Common::GetMessageBus()->Attach(&normal_func, "ServiceProvider");

    // 注册类成员函数
    std::function<bool(const string&)> f = std::bind(&ServiceProvider::MemberFunc, this, std::placeholders::_1);
    Common::GetMessageBus()->Attach(std::move(f), "ServiceProvider");

    std::function<void()> f2 = std::bind(&ServiceProvider::MemberFunc2, this );
    Common::GetMessageBus()->Attach(std::move(f2), "ServiceProvider");


    std::function<void()> f3 = std::bind(&ServiceProvider::ConMemberFunc, this);
    Common::GetMessageBus()->Attach(std::move(f3), "ServiceProvider");

    std::function<void(int)> f4 = std::bind(&ServiceProvider::StaticMemberFunc,std::placeholders::_1);
    Common::GetMessageBus()->Attach(std::move(f4), "ServiceProvider");
}

bool ServiceProvider::MemberFunc(const string& msg)
{
    cout << "bool ServiceProvider::MemberFunc(const string &msg)===>" << msg << endl;
    return true;
}

void ServiceProvider::MemberFunc2()
{
    cout << "bool ServiceProvider::MemberFunc(const string &msg)2===>" << endl;
}

void ServiceProvider::ConMemberFunc() const
{
    cout << "void ServiceProvider::ConMemberFunc() const===>" << endl;
}

void ServiceProvider::StaticMemberFunc(int param)
{
    cout << "void ServiceProvider::StaticMemberFunc(const int param)===>" << param << endl;
}
