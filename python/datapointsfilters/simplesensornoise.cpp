#include "simplesensornoise.h"

namespace pointmatcher
{
	void pybindSimpleSensorNoise(py::module& p_module)
	{
		using SimpleSensorNoiseDataPointsFilter = SimpleSensorNoiseDataPointsFilter<double>;
		py::class_<SimpleSensorNoiseDataPointsFilter, std::shared_ptr<SimpleSensorNoiseDataPointsFilter>, DataPointsFilter>
			(p_module, "SimpleSensorNoiseDataPointsFilter", "Sick LMS-xxx noise model")

			.def_static("description", &SimpleSensorNoiseDataPointsFilter::description)
			.def_static("availableParameters", &SimpleSensorNoiseDataPointsFilter::availableParameters)

			.def_readonly("sensorType", &SimpleSensorNoiseDataPointsFilter::sensorType)
			.def_readonly("gain", &SimpleSensorNoiseDataPointsFilter::gain)

			.def(py::init<const Parameters&>(), py::arg("params") = Parameters(), "Constructor, uses parameter interface")

			.def("filter", &SimpleSensorNoiseDataPointsFilter::filter)
			.def("inPlaceFilter", &SimpleSensorNoiseDataPointsFilter::inPlaceFilter);
	}
}