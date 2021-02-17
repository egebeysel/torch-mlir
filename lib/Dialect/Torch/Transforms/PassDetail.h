//===- PassDetail.h - Pass details ------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef NPCOMP_DIALECT_TORCH_TRANSFORMS_PASSDETAIL_H
#define NPCOMP_DIALECT_TORCH_TRANSFORMS_PASSDETAIL_H

#include "mlir/Pass/Pass.h"

namespace mlir {
namespace NPCOMP {
namespace Torch {

#define GEN_PASS_CLASSES
#include "npcomp/Dialect/Torch/Transforms/Passes.h.inc"

} // namespace Torch
} // namespace NPCOMP
} // end namespace mlir

#endif // NPCOMP_DIALECT_TORCH_TRANSFORMS_PASSDETAIL_H
