/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(iir_filter_ccd.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(59ea50b9138a1a8850002f7a0d15221b)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/iir_filter_ccd.h>
// pydoc.h is automatically generated in the build directory
#include <iir_filter_ccd_pydoc.h>

void bind_iir_filter_ccd(py::module& m)
{

    using iir_filter_ccd = ::gr::filter::iir_filter_ccd;


    py::class_<iir_filter_ccd,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<iir_filter_ccd>>(m, "iir_filter_ccd", D(iir_filter_ccd))

        .def(py::init(&iir_filter_ccd::make),
             py::arg("fftaps"),
             py::arg("fbtaps"),
             py::arg("oldstyle") = true,
             D(iir_filter_ccd, make))


        .def("set_taps",
             &iir_filter_ccd::set_taps,
             py::arg("fftaps"),
             py::arg("fbtaps"),
             D(iir_filter_ccd, set_taps))

        ;
}