#pragma once
#include "account.h"
class nvdh: public account{
public:
    nvdh();
    nvdh(string, int ,string);
};
nvdh::nvdh()
{}
nvdh::nvdh(string, int ,string):account(name, ID, password)
{}