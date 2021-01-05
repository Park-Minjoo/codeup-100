#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	for (int i = 73; i <= 74; i ++){
		ofstream out("%d.cpp", i);
		cout << " ";
		out.close();	
	}
}
