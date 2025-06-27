#include <cstdlib>
#include <format>
#include <fstream>

int f(int n) { return (n % 2 == 0) ? (n >> 1) : ((3 * n) + 1); }

int main(int /*argc*/, char *argv[]) {
  // Retrieve maximum integer from command line
  const int N = std::atoi(argv[1]);

  // Write to the .gv file
  std::ofstream file("tmp.gv");
  if (file.is_open()) {
    file << "digraph G {\n";

    for (int n = 1; n <= N; ++n) {
      file << std::format("  {} -> {};\n", n, f(n));
    }

    file << "}";
    file.close();
  }

  // Invoke GraphViz to generate visual from .gv file
  system(std::format("dot -Tsvg tmp.gv > collatz{}.svg", N).c_str());
  system("rm tmp.gv");
  return 0;
}
