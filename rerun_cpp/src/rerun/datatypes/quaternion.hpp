// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/datatypes/quaternion.fbs".

#pragma once

#include "../result.hpp"

#include <array>
#include <cstdint>
#include <memory>

namespace arrow {
    class DataType;
    class FixedSizeListBuilder;
    class MemoryPool;
} // namespace arrow

namespace rerun {
    namespace datatypes {
        /// **Datatype**: A Quaternion represented by 4 real numbers.
        ///
        /// Note: although the x,y,z,w components of the quaternion will be passed through to the
        /// datastore as provided, when used in the viewer Quaternions will always be normalized.
        struct Quaternion {
            std::array<float, 4> xyzw;

          public:
            // Extensions to generated type defined in 'quaternion_ext.cpp'

            static const Quaternion IDENTITY;

            /// Construct Quaternion from x/y/z/w values.
            static Quaternion from_xyzw(float x, float y, float z, float w) {
                return Quaternion{x, y, z, w};
            }

            /// Construct Quaternion from w/x/y/z values.
            static Quaternion from_wxyz(float w, float x, float y, float z) {
                return Quaternion{x, y, z, w};
            }

            /// Construct Quaternion from x/y/z/w array.
            static Quaternion from_xyzw(std::array<float, 4> xyzw_) {
                return Quaternion{xyzw_};
            }

            /// Construct Quaternion from w/x/y/z array.
            static Quaternion from_wxyz(std::array<float, 4> wxyz_) {
                return Quaternion{wxyz_[1], wxyz_[2], wxyz_[3], wxyz_[0]};
            }

            /// Construct Quaternion from x/y/z/w float pointer.
            static Quaternion from_xyzw(const float* xyzw_) {
                return Quaternion{xyzw_[0], xyzw_[1], xyzw_[2], xyzw_[3]};
            }

            /// Construct Quaternion from w/x/y/z float pointer.
            static Quaternion from_wxyz(const float* wxyz_) {
                return Quaternion{wxyz_[1], wxyz_[2], wxyz_[3], wxyz_[0]};
            }

            float x() const {
                return xyzw[0];
            }

            float y() const {
                return xyzw[1];
            }

            float z() const {
                return xyzw[2];
            }

            float w() const {
                return xyzw[3];
            }

          public:
            Quaternion() = default;

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::FixedSizeListBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::FixedSizeListBuilder* builder, const Quaternion* elements,
                size_t num_elements
            );
        };
    } // namespace datatypes
} // namespace rerun
