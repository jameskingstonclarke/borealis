//
// Created by jking on 30/01/2021.
//


#include "crypto.h"
#include <picosha2.h>

std::string sha256(std::string s){
    std::string hash_hex_str = picosha2::hash256_hex_string(s);
    return hash_hex_str;
}