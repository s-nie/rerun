// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/components/material.fbs".

#pragma once

#include "../data_cell.hpp"
#include "../datatypes/material.hpp"
#include "../datatypes/rgba32.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>
#include <optional>

namespace arrow {
    class DataType;
    class MemoryPool;
    class StructBuilder;
} // namespace arrow

namespace rerun {
    namespace components {
        /// **Component**: Material properties of a mesh.
        struct Material {
            rerun::datatypes::Material material;

            /// Name of the component, used for serialization.
            static const char NAME[];

          public:
            // Extensions to generated type defined in 'material_ext.cpp'

            static Material from_albedo_factor(rerun::datatypes::Rgba32 color) {
                return Material(color);
            }

          public:
            Material() = default;

            Material(rerun::datatypes::Material material_) : material(material_) {}

            Material& operator=(rerun::datatypes::Material material_) {
                material = material_;
                return *this;
            }

            Material(std::optional<rerun::datatypes::Rgba32> albedo_factor_)
                : material(albedo_factor_) {}

            Material& operator=(std::optional<rerun::datatypes::Rgba32> albedo_factor_) {
                material = albedo_factor_;
                return *this;
            }

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::StructBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::StructBuilder* builder, const Material* elements, size_t num_elements
            );

            /// Creates a Rerun DataCell from an array of Material components.
            static Result<rerun::DataCell> to_data_cell(
                const Material* instances, size_t num_instances
            );
        };
    } // namespace components
} // namespace rerun
