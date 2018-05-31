#include "Logger.hh"

using namespace std;

Logger& Logger::create(LevelType level) {
  if (level == INFO) {
    static Logger logger(level, cout);
    return logger;
  }
  else {
    static Logger logger(level, cerr);
    return logger;
  }
}
