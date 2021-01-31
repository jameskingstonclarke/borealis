//
// Created by jking on 30/01/2021.
//


#pragma once

#include "common.h"
#include "key.h"

struct Address {
    Key m_addr;

    static Address create(Key addr);
    bool operator==(const Address other) const;
    u8 eql(Address& other) const;
};