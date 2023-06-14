#!/usr/bin/python3
#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p)
{
    Py_ssize_t size, i;
    PyObject *item;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", PyList_Size(p));
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    size = PyList_Size(p);
    for (i = 0; i < size; i++)
    {
        item = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

void print_python_bytes(PyObject *p)
{
    Py_ssize_t size, i;
    char *str;

    printf("[.] bytes object info\n");
    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    printf("  [.] Size: %ld\n", PyBytes_Size(p));
    str = PyBytes_AsString(p);

    printf("  [.] Trying string: %s\n", str);
    size = PyBytes_Size(p);
    size = size + 1 < 10 ? size + 1 : 10;
    printf("  [.] first %ld bytes:", size);
    for (i = 0; i < size; i++)
    {
        printf(" %02hhx", str[i]);
    }
    printf("\n");
}
