#ifndef PYTHON_POINTMATCHER_INSPECTOR_H
#define PYTHON_POINTMATCHER_INSPECTOR_H

#include "pypointmatcher_helper.h"

namespace pointmatcher
{
	void pybindInspector(py::class_<PM>& p_class);
}

#endif //PYTHON_POINTMATCHER_INSPECTOR_H
