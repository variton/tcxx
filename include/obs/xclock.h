
#ifndef XCLOCK_H
#define XCLOCK_H

#include <chrono>
#include <nc.h>
#include <string>
#include <string_view>

namespace obs {

template <typename T> using Movable = core::NC<T>;

template <typename CLOCK = std::chrono::system_clock,
          typename PRECISION = std::chrono::seconds>
class Xclock : public Movable<Xclock<CLOCK, PRECISION>> {
public:
  Xclock() noexcept;
  ~Xclock();
  void operator()() noexcept;
  std::string_view elapsed() const;

private:
  void start() noexcept;
  void stop() noexcept;
  void measure() noexcept;

  bool started_;
  std::string time_elapsed_;
  std::chrono::time_point<CLOCK, PRECISION> begin_;
  std::chrono::time_point<CLOCK, PRECISION> end_;
};

} // namespace obs

#include <xclock.tpp>

#endif // XCLOCK_H
