#include "UUID.h"
#include <random>
#include <sstream>
#include <iomanip>

std::string generateUUID() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 15);

    std::stringstream uuidStream;

    for (int i = 0; i < 8; ++i) uuidStream << std::hex << dist(gen);
    uuidStream << "-";
    for (int i = 0; i < 4; ++i) uuidStream << std::hex << dist(gen);
    uuidStream << "-";
    for (int i = 0; i < 4; ++i) uuidStream << std::hex << dist(gen);
    uuidStream << "-";
    for (int i = 0; i < 4; ++i) uuidStream << std::hex << dist(gen);
    uuidStream << "-";
    for (int i = 0; i < 12; ++i) uuidStream << std::hex << dist(gen);

    return uuidStream.str();
}
