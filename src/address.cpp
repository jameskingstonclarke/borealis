//
// Created by jking on 30/01/2021.
//


#include "address.h"

Address Address::create(Key addr){
    Address a;
    a.m_addr = addr;
    return a;
}


bool Address::operator==(const Address other) const {
    return m_addr==other.m_addr;
}


u8 Address::eql(Address& other) const {
    return m_addr.eql(other.m_addr);
}