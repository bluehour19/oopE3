#include "Math.h"
#include <iostream>
#include <string.h>


using namespace std;
int main()
{
	cout << "Math::Add(3, 4) = " << Math::Add(3, 4) << "\n";
	cout << "Math::Add(3, 4, 6) = " << Math::Add(3, 4, 6) << "\n";
	cout << "Math::Add(5.5, 6.2) = " << Math::Add(5.5, 6.2) << "\n";
	cout << "Math::Add(3.1, 4.2, 7.3) = " << Math::Add(3.1, 4.2, 7.3) << "\n";
	cout << "Math::Mul(1, 2) = " << Math::Mul(1, 2) << "\n";
	cout << "Math::Mul(1, 2, 3) = " << Math::Mul(1, 2, 3) << "\n";
	cout << " Math::Mul(1.1, 2.6) " << Math::Mul(1.1, 2.6) << "\n";
	cout << "Math::Mul(1.1, 2.6, 4.5) =  " << Math::Mul(1.1, 2.6, 4.5) << "\n";
	cout << "Math::Add(4, 1, 2, 3, 4) = " << Math::Add(4, 1, 2, 3, 4) << "\n";
	cout << " Math::Add(const* char, const* char) =  " << Math::Add("one", "two") << "\n";
	return 0;
}