
#define DOCTEST_CONFIG_IMPLEMENT

#include <doctest/doctest.h>

#include <fmt/core.h>
#include <runtime.h>

TEST_CASE("clock behavior") { CHECK(1 + 1 == 2); }

MILLI_CLOCK_RUNTIME_MAIN {
  clock();
  clock();
  const auto time = clock.elapsed();
  fmt::println("{} ms", time);
  doctest::Context context;
  context.applyCommandLine(argc, argv);
  return context.run();
}
