#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_last_digit(int n) {
    assert(n >= 1);
    // put your code here
	if (n == 1)
		return 1;
	int n1 = 1;
	int n2 = 0;
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum = (n1 + n2) % 10;
		n2 = n1;
		n1 = sum;

	}
    return sum;
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
}
