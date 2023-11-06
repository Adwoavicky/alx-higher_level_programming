#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info - displays some basic info on Python list
 * @p: list of Python to be displayed
 * */

void print_python_list_info(PyObject *p)
{
	int elem;

	printf("[*] Size of the Python list = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d: %s\n", elem, Py_TYPE(PyList_Getltem(p,elem))->tp_name)
}
