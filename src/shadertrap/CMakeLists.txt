# Copyright 2021 The ShaderTrap Project Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

if(SHADERTRAP_WARNING_SUPPRESSIONS)
    if(MSVC)
        add_compile_options(
                /wd5039
        )
    else()
    endif()
endif()

add_executable(shadertrap
        src/main.cc
)
target_link_libraries(shadertrap PRIVATE egl_headers glad libshadertrap ${SHADERTRAP_EGL_LIB_PATH})
