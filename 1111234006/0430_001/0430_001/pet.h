#ifndef PET_H
#define PET_H

#include <string>       
#include "Date.h"       

class pet
{
public:
    // �غc�l�A�����d�������B�W�r�B�ͤ�B��i��|�ӰѼ�
    pet(const std::string&, const std::string&, const Date&, const Date&);

    // �L�X�d����T�A�]�A:�W�r�B�����B�ͤ�B��i��
    void print() const;

    // �Ѻc�l
    ~pet();

private:
    std::string type;     // ����
    std::string name;     // �W�r
    const Date birthDate; // �X�ͤ��
    const Date adoptDate; // ��i���
};
#endif


