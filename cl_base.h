#ifndef __CL_BASE_H__
#define __CL_BASE_H__
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
private:
	string name;
	vector <cl_base*> children;
	cl_base* parent;

public:
	cl_base(string name, cl_base* parent);
	~cl_base();
	string get_name();
	void set_name(string name);
	cl_base* get_parent();
	void set_parent(cl_base* new_parent);
	void print();
};
#endif