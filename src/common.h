//
// Created by jking on 30/01/2021.
//

#ifndef COCOA_COMMON_H
#define COCOA_COMMON_H

#include <string>
#include <vector>
#include <spdlog/spdlog.h>


#define log(fmt, ...) spdlog::info(fmt, ##__VA_ARGS__)

#define u8 uint8_t
#define u32 uint32_t
#define s32 int32_t
#define f64 double
#define str std::string
#define vec std::vector




#endif //COCOA_COMMON_H
