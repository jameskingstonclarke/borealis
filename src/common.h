//
// Created by jking on 30/01/2021.
//

#pragma once

#include <string>
#include <vector>
#include <spdlog/spdlog.h>


#define log(fmt, ...) spdlog::info(fmt, ##__VA_ARGS__)

#define u8 uint8_t
#define u32 uint32_t
#define s32 int32_t
#define f64 double
#define vec std::vector
