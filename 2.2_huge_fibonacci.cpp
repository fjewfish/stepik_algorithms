//oгромное число Фибоначчи по модулю
//необходимо найти остаток от деления
//n-го числа Фибоначчи на m
#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_remainder(long long n, int m) {
    assert(n >= 1);
    assert(m >= 2);
    // put your code here
	if (n == 1)
		return 1;
	long long n1 = 1;
	long long n2 = 0;
	long long sum = 0;
	for (long long i = 1; i < n; i++) {
		sum = (n1 + n2) % m;
		n2 = n1;
		n1 = sum;

	}
    return sum;
  }
};

int main(void) {
  long long n;
  int m;
  std::cin >> n >> m;
  std::cout << Fibonacci::get_remainder(n, m) << std::endl;
  return 0;
}
