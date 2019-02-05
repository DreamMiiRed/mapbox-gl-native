#pragma once

#include <mbgl/gl/gl_function_pointers.hpp>

namespace mbgl {
namespace platform {

/**
 * @brief Get the global table of OpenGL ES 2.0 function pointers. Mapbox GL
 * Native will make no assumptions on how the table is created. Platforms
 * can dynamically load OpenGL, link against an OpenGL implementation or
 * even use a software rendering implementation, as long as it behaves as
 * expected and the table is valid during the lifecycle of the application.
 *
 * @return Table of OpenGL ES 2.0 function pointers.
 */
gl::GLFunctionPointers getGLFunctionPointers();

} // namespace platform
} // namespace mbgl
