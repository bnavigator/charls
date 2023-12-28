// Copyright (c) Team CharLS.
// SPDX-License-Identifier: BSD-3-Clause

#pragma once

#include "coding_parameters.h"

#include <memory>


namespace charls {

template<typename ScanProcess>
[[nodiscard]]
std::unique_ptr<ScanProcess> make_scan_codec(const frame_info& frame, const coding_parameters& parameters,
                                             const jpegls_pc_parameters& preset_coding_parameters);


extern template std::unique_ptr<class scan_decoder>
make_scan_codec<scan_decoder>(const frame_info&, const coding_parameters&, const jpegls_pc_parameters&);
extern template std::unique_ptr<class scan_encoder>
make_scan_codec<scan_encoder>(const frame_info&, const coding_parameters&, const jpegls_pc_parameters&);

} // namespace charls
