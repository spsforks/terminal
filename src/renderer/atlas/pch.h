// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include <array>
#include <filesystem>
#include <optional>
#include <shared_mutex>
#include <span>
#include <sstream>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <d2d1_3.h>
#include <d3d11_2.h>
#include <d3dcompiler.h>
#include <dcomp.h>
#include <dwrite_3.h>
#include <dxgi1_3.h>
#include <dxgidebug.h>
#include <VersionHelpers.h>
#include <wincodec.h>

#include <gsl/gsl_util>
#include <gsl/pointers>
#include <wil/com.h>
#include <wil/filesystem.h>
#include <wil/result_macros.h>
#include <wil/stl.h>
#include <wil/win32_helpers.h>

// Chromium Numerics (safe math)
#pragma warning(push)
#pragma warning(disable : 4100) // '...': unreferenced formal parameter
#pragma warning(disable : 26812) // The enum type '...' is unscoped. Prefer 'enum class' over 'enum' (Enum.3).
#include <base/numerics/safe_math.h>
#pragma warning(pop)

// {fmt}, a C++20-compatible formatting library
#include <fmt/format.h>
#include <fmt/compile.h>

#include <til.h>
#include <til/bit.h>
