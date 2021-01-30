cmake_minimum_required(VERSION 3.17)
project(cocoa)

set(CMAKE_CXX_STANDARD 20)

include_directories("vendor/spdlog-1.x/include")

add_executable(cocoa src/main.cpp src/cocoa.h src/block.h src/block.cpp src/common.h src/transaction.h src/address.h src/blockchain.h src/wallet.h src/wallet.cpp src/key.h src/blockchain.cpp src/transaction.cpp)