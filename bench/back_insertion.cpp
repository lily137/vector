#include <cstdio>
#include <ctime>
#include <vector>
#include "../vector.hpp"

#ifdef USE_LNI_VECTOR
using lni::vector;
#else
using std::vector;
#endif

const int N = 5e7;

int main() {
	int i;
	time_t st;

	st = clock();

	vector<int> v;
	for (i = 0; i < N; ++i)
		v.push_back(i);
	for (i = 0; i < N; ++i)
		v.emplace_back(i);

	printf("%.3fs\n", (double)(clock() - st) / CLOCKS_PER_SEC);

	return 0;
}