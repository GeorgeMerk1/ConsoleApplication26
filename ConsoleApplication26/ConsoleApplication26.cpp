

#include <iostream>
using namespace std;
int main() {
	char c;
	c = getchar();
	while (c != EOF) {
		if (c == ' ') {
			putchar('\t');
		}
		else{
			putchar(c);
		}
		c = getchar();
	}
	

}

