// Copyright 2020 The ShaderTrap Project Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LIBSHADERTRAP_COMMAND_CREATE_RENDERBUFFER_H
#define LIBSHADERTRAP_COMMAND_CREATE_RENDERBUFFER_H

#include <cstddef>
#include <memory>
#include <string>

#include "libshadertrap/command.h"
#include "libshadertrap/token.h"

namespace shadertrap {

class CommandCreateRenderbuffer : public Command {
 public:
  CommandCreateRenderbuffer(std::unique_ptr<Token> start_token,
                            std::string result_identifier, size_t width,
                            size_t height);

  bool Accept(CommandVisitor* visitor) override;

  size_t GetWidth() const { return width_; }

  size_t GetHeight() const { return height_; }

  const std::string& GetResultIdentifier() const { return result_identifier_; }

 private:
  std::string result_identifier_;
  size_t width_;
  size_t height_;
};

}  // namespace shadertrap

#endif  // LIBSHADERTRAP_COMMAND_CREATE_RENDERBUFFER_H
