#include "cl_application.h"

void cl_application::build_tree_object()
{
	string parent_name, child_name;
	cl_base* parent_ptr; cl_base* child_ptr;
	cin >> parent_name;
	this->set_name(parent_name);
	parent_ptr = this; child_ptr = nullptr;
	while (true)
	{
		cin >> parent_name >> child_name;
		if (parent_name == child_name)
		{
			break;
		}
		if (child_ptr != nullptr and child_ptr->get_name() == parent_name)
		{
			parent_ptr = child_ptr;
		}
		child_ptr = new cl_1(child_name, parent_ptr);
	}
}
int cl_application::exec_app()
{
	cout << get_name();
	print();
	return 0;
}