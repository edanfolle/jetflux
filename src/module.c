#define PY_SSIZE_T_CLEAN

#include <Python.h>

static PyObject *spam_system(PyObject *self, PyObject *args) {
    const char *command;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &command))
        return NULL;
    sts = system(command);
    return PyLong_FromLong(sts);
}

static PyMethodDef SpamMethods[] = {
    {"system",  spam_system, METH_VARARGS, "Execute a shell command."},
    /* Sentinel */
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef jetflux_module = {
    PyModuleDef_HEAD_INIT,
    "jetflux",   /* name of module */
    NULL, /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    SpamMethods
};

PyMODINIT_FUNC PyInit_server(void) {
    return PyModule_Create(&jetflux_module);
}
