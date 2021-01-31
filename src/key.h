//
// Created by jking on 30/01/2021.
//

#pragma once
#include "common.h"

struct Key{
    std::string m_key;
    static Key create(std::string key);
    bool operator==(const Key other) const;
    u8 eql(Key& other) const;
};