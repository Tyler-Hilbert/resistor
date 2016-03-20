#include "BigNum.h"
#define MAX 10000 // for strings

BigNum::BigNum(const string& n) {
	nums = vector<char>(n.begin(), n.end());
}

string BigNum::toString() {
	return string(nums.begin(), nums.end());
}

BigNum BigNum::add(BigNum &bn) {
	int carry = 0;
	string newBigNum = "";
	string n1 = bn.toString();
	string n2 = toString();
	
	while (n1.length() > 0 || n2.length() > 0) {
		int c1;
		if (n1.length() > 0) {
			c1 = n1.back() - '0';
			n1.pop_back();
		} else {
			c1 = 0;
		}

		int c2;
		if (n2.length() > 0) {
			c2 = n2.back() - '0';
			n2.pop_back();
		} else {
			c2 = 0;
		}

		int num = c1 + c2 + carry;
		if (num > 9) {
			carry = 1;
			num -= 10;
		} else {
			carry = 0;
		}
		char c = num + '0';
		newBigNum = c + newBigNum;
	}

	if (carry > 0) {
		char c = carry + '0';
		newBigNum = c + newBigNum;
	}

	BigNum returnNum(newBigNum);
	return returnNum;
}

BigNum BigNum::divide(BigNum &bn) {
	long long rem = 0;
	string result;
	result.resize(MAX);
	string n = bn.toString();
	long long den = 0;


	for (int indx = 0, len = n.length(); indx<len; ++indx) {
		rem = (rem * 10) + (n[indx] - '0');
		result[indx] = rem / den + '0';
		rem %= den;
	}
	result.resize(n.length());

	while (result[0] == '0' && result.length() != 1)
		result.erase(0, 1);

	if (result.length() == 0)
		result = "0";
	BigNum num(result);
	return num;
}

BigNum BigNum::mult(BigNum &bn) {
	string newBigNum = "0";
	string n1 = bn.toString();
	string n2 = toString();

	if (n1.length() > n2.length())
		n1.swap(n2);

	for (int i = n1.length() - 1; i >= 0; --i) {
		string temp = n2;
		int currentDigit = n1[i] - '0';
		int carry = 0;

		for (int j = temp.length() - 1; j >= 0; --j) {
			temp[j] = ((temp[j] - '0') * currentDigit) + carry;

			if (temp[j] > 9) {
				carry = (temp[j] / 10);
				temp[j] -= (carry * 10);
			} else
				carry = 0;

			temp[j] += '0'; // back to string mood
		}

		if (carry > 0)
			temp.insert(0, 1, (carry + '0'));

		temp.append((n1.length() - i - 1), '0'); // as like mult by 10, 100, 1000, 10000 and so on

		BigNum num(newBigNum);
		BigNum bnTemp(temp);
		BigNum bnRes = num.add(bnTemp); // O(n)
		newBigNum = bnRes.toString();
	}

	while (newBigNum[0] == '0' && newBigNum.length() != 1) // erase leading zeros
		newBigNum.erase(0, 1);

	BigNum returnNum(newBigNum);
	return returnNum;
}