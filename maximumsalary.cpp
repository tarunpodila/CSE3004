#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>


using std::vector;
using std::string;

bool IsGreaterOrEqual(string digit, string maxDigit){

if (digit+maxDigit >=maxDigit +digit) {

return true;

}else{

return false;

}

}



string largest_number(vector<string> a) {



string result;

std::stringstream ret;

while (a.size()) {

string Maxdigit("0");

size_t index = 0;

for (size_t digit = 0; digit < a.size(); digit++) {


if (IsGreaterOrEqual(a[digit], Maxdigit)) {

Maxdigit = a[digit] ;

index = digit;

}

}

ret << Maxdigit;

a.erase(a.begin() + index);

}

ret >> result;

return result;

}



int main() {

int n;

std::cin >> n;

vector<string> a(n);

for (size_t i = 0; i < a.size(); i++) {

std::cin >> a[i];

}

std::cout << largest_number(a);

}
