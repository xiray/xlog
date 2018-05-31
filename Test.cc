#include "Logger.hh"

using namespace std;

int main(int argc, char** argv) {
  Logger& log = Logger::create(Logger::INFO);
  log << 123 << ", hello" << std::endl;
  return 0;
}
