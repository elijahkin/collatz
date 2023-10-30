#include <fstream>

int collatz(int n) { return (n % 2 == 0) ? (n / 2) : (3 * n + 1); }

int main(int argc, char *argv[]) {
  // Retrieve maximum integer from command line
  int N = atoi(argv[1]);

  // Write to the .gv file
  std::ofstream file("collatz.gv");
  if (file.is_open()) {
    file << "digraph G {\n";

    for (int n = 1; n <= N; n++) {
      file << "  " << n << " -> " << collatz(n) << ";\n";
    }

    file << "}";
    file.close();
  }

  // Invoke GraphViz to generate visual from .gv file
  system("dot -Tsvg collatz.gv > collatz.svg");
  return 0;
}