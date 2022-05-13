#include "cl_base.h"

cl_base::cl_base(string name, cl_base* parent)
{
	this->name = name;
	this->parent = parent;
	if (parent != nullptr)
	{
		parent->children.push_back(this);
	}
}
cl_base::~cl_base() {
	for (int i = 0; i < children.size(); i++)
	{
		delete children[i];
	}
}
void cl_base::set_parent(cl_base* new_parent)
{
	if (parent != nullptr)
	{
		for (int i = 0; i < parent->children.size(); i++)
		{
				if (parent->children[i] == this)
				{
					parent->children.erase(parent -> children.begin() + i);
				}
		}
	}
	parent = new_parent;
	if (parent != nullptr)
	{
		parent->children.push_back(this);
	}
}
string cl_base::get_name()
{
	return name;
}
void cl_base::set_name(string name)
{
	this->name = name;
}
cl_base* cl_base::get_parent()
{

	return parent;
}
void cl_base::print()
{
	if (!children.size())
	{
		return;
	}
	cout << "\n" << get_name();
	for (int i = 0; i < children.size(); i++)
	{
		cout << " " << children[i]->get_name();
	}
	for (int i = 0; i < children.size(); i++)
	{
		children[i]->print();
	}
}