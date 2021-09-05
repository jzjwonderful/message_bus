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
    // ��ͨ��Ա�������� ������ֵ
    bool MemberFunc(const string &msg);

    // ��ͨ��Ա�������� ��������ֵ
    void MemberFunc2();

    // ��const�޶����ĳ�Ա����
    void ConMemberFunc() const;

    // ��̬��Ա����
    static void StaticMemberFunc(int param);
};
