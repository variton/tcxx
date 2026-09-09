#ifndef RUNTIME_H
#define RUNTIME_H

#include <fmt/core.h>
#include <xclock.h>

/**
 * @file runtime.h
 * @brief Provides entry-point macros for clock-based applications.
 */

namespace obs {

/**
 * @brief Defines the application entry point with second-resolution timing.
 */
#define CLOCK_RUNTIME_MAIN                                                     \
  static int clock_runtime_main(int argc, char **argv, obs::s_clock &clock);   \
                                                                               \
  int main(int argc, char **argv) {                                            \
    if (argc == 1) {                                                           \
      fmt::println("missing argument");                                        \
      return EXIT_FAILURE;                                                     \
    }                                                                          \
                                                                               \
    obs::s_clock clock;                                                        \
    return clock_runtime_main(argc, argv, clock);                              \
  }                                                                            \
                                                                               \
  static int clock_runtime_main(int argc, char **argv,                         \
                                [[maybe_unused]] obs::s_clock &clock)

/**
 * @brief Defines the application entry point with millisecond-resolution timing.
 */
#define MILLI_CLOCK_RUNTIME_MAIN                                               \
  static int clock_runtime_main(int argc, char **argv, obs::milli_c &clock);   \
                                                                               \
  int main(int argc, char **argv) {                                            \
    if (argc == 1) {                                                           \
      fmt::println("missing argument");                                        \
      return EXIT_FAILURE;                                                     \
    }                                                                          \
                                                                               \
    obs::milli_c clock;                                                        \
    return clock_runtime_main(argc, argv, clock);                              \
  }                                                                            \
                                                                               \
  static int clock_runtime_main(int argc, char **argv,                         \
                                [[maybe_unused]] obs::milli_c &clock)

/**
 * @brief Defines the application entry point with microsecond-resolution timing.
 */
#define MICRO_CLOCK_RUNTIME_MAIN                                               \
  static int clock_runtime_main(int argc, char **argv, obs::micro_c &clock);   \
                                                                               \
  int main(int argc, char **argv) {                                            \
    if (argc == 1) {                                                           \
      fmt::println("missing argument");                                        \
      return EXIT_FAILURE;                                                     \
    }                                                                          \
                                                                               \
    obs::micro_c clock;                                                        \
    return clock_runtime_main(argc, argv, clock);                              \
  }                                                                            \
                                                                               \
  static int clock_runtime_main(int argc, char **argv,                         \
                                [[maybe_unused]] obs::micro_c &clock)

/**
 * @brief Defines the application entry point with nanosecond-resolution timing.
 */
#define NANO_CLOCK_RUNTIME_MAIN                                                \
  static int clock_runtime_main(int argc, char **argv, obs::nano_c &clock);   \
                                                                               \
  int main(int argc, char **argv) {                                            \
    if (argc == 1) {                                                           \
      fmt::println("missing argument");                                        \
      return EXIT_FAILURE;                                                     \
    }                                                                          \
                                                                               \
    obs::nano_c clock;                                                         \
    return clock_runtime_main(argc, argv, clock);                              \
  }                                                                            \
                                                                               \
  static int clock_runtime_main(int argc, char **argv,                         \
                                [[maybe_unused]] obs::nano_c &clock)

} // namespace obs

#endif // RUNTIME_H
