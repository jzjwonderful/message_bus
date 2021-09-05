#pragma once

#include <string>
using namespace std;
#include "service_provider_global.h"

class SERVICE_PROVIDER_EXPORT ServiceProvider
{
public:
    ServiceProvider();

public:

    void Init();

private:
    // 普通成员函数测试 带返回值
    bool MemberFunc(const string &msg);

    // 普通成员函数测试 不带返回值
    void MemberFunc2();

    // 带const限定符的成员函数
    void ConMemberFunc() const;

    // 静态成员函数
    static void StaticMemberFunc(int param);
};
