#include <iostream>
#include <spdlog/spdlog.h>

int main() {
  spdlog::set_level(spdlog::level::info);
  spdlog::info("Hello world!");

  return 0;
}