#pragma once
#include <iostream>

class Entity
{
private:
    int m_id;

public:
    virtual void Update() = 0;
    int GetId();
    void SetId(int id);
};