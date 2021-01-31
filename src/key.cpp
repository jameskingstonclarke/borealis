//
// Created by jking on 30/01/2021.
//

#include "key.h"


Key Key::create(std::string key){
    Key k;
    k.m_key=key;
    return k;
}


bool Key::operator==(const Key other) const{
    return m_key.compare(other.m_key)==0;
}


u8 Key::eql(Key& other) const {
    return m_key.compare(other.m_key)==0;
}