cmake_minimum_required(VERSION 3.17)
project(borealis)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        "vendor/spdlog-1.x/include"
        "vendor/picosha")


add_subdirectory(vendor/Catch2)
add_executable(main src/main.cpp src/cocoa.h src/block.h src/block.cpp src/common.h src/transaction.h src/address.h src/blockchain.h src/wallet.h src/wallet.cpp src/key.h src/blockchain.cpp src/transaction.cpp src/address.cpp src/miner.h src/miner.cpp src/key.cpp src/crypto.h src/crypto.cpp)
add_executable(test src/test.cpp src/cocoa.h src/block.h src/block.cpp src/common.h src/transaction.h src/address.h src/blockchain.h src/wallet.h src/wallet.cpp src/key.h src/blockchain.cpp src/transaction.cpp src/address.cpp src/miner.h src/miner.cpp src/key.cpp src/crypto.h src/crypto.cpp)
target_link_libraries(test PRIVATE Catch2::Catch2)