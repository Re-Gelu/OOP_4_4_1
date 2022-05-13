#include <iostream>

#include "cl_application.h"

using namespace std;

int main() {
	cl_application ob;
	ob.build_tree_object();
	return ob.exec_app();
}