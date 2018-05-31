#ifndef _Logger_hh_include
#define _Logger_hh_include

#include <iostream>

class Logger {
public:
  typedef enum { INFO, WARN, ERROR } LevelType;

  static Logger& create(LevelType level);

  template<typename T>
  Logger& operator<<(const T& value) {
    mOutput << value;
    return *this;
  }

  Logger& operator<<(std::ostream& (*func)(std::ostream&)) {
    func(mOutput);
    return *this;
  }

private:
  Logger(LevelType level, std::ostream& os) : mLevel(level), mOutput(os) {}

private:
  LevelType mLevel;
  std::ostream& mOutput;
};

#endif // _Logger_hh_include
