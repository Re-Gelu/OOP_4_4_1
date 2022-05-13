#ifndef __CL_APPLICATION_H__
#define __CL_APPLICATION_H__
#include "cl_base.h"
#include "cl_1.h"

class cl_application : public cl_base
{
public:
	cl_application() : cl_base("", nullptr) {};
	void build_tree_object();
	int exec_app();
};
#endif