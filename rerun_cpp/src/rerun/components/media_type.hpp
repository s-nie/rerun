// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/components/media_type.fbs".

#pragma once

#include "../data_cell.hpp"
#include "../datatypes/utf8.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>
#include <string>
#include <utility>

namespace arrow {
    class DataType;
    class MemoryPool;
    class StringBuilder;
} // namespace arrow

namespace rerun {
    namespace components {
        /// **Component**: A standardized media type (RFC2046, formerly known as MIME types), encoded as a utf8 string.
        ///
        /// The complete reference of officially registered media types is maintained by the IANA and can be
        /// consulted at <https://www.iana.org/assignments/media-types/media-types.xhtml>.
        struct MediaType {
            rerun::datatypes::Utf8 value;

            /// Name of the component, used for serialization.
            static const char NAME[];

          public:
            // Extensions to generated type defined in 'media_type_ext.cpp'

            MediaType(const char* media_type) : value(media_type) {}

            // TODO(#2388): come up with some DSL in our flatbuffers definitions so that we can
            // declare these constants directly in there.

            /// `text/plain`
            static MediaType plain_text() {
                return "text/plain";
            }

            /// `text/markdown`
            ///
            /// <https://www.iana.org/assignments/media-types/text/markdown>
            static MediaType markdown() {
                return "text/markdown";
            }

            /// [`glTF`](https://en.wikipedia.org/wiki/GlTF): `model/gltf+json`.
            ///
            /// <https://www.iana.org/assignments/media-types/model/gltf+json>
            static MediaType gltf() {
                return "model/gltf+json";
            }

            /// Binary [`glTF`](https://en.wikipedia.org/wiki/GlTF): `model/gltf-binary`.
            ///
            /// <https://www.iana.org/assignments/media-types/model/gltf-binary>
            static MediaType glb() {
                return "model/gltf-binary";
            }

            /// [Wavefront .obj](https://en.wikipedia.org/wiki/Wavefront_.obj_file): `model/obj`.
            ///
            /// <https://www.iana.org/assignments/media-types/model/obj>
            static MediaType obj() {
                return "model/obj";
            }

          public:
            MediaType() = default;

            MediaType(rerun::datatypes::Utf8 value_) : value(std::move(value_)) {}

            MediaType& operator=(rerun::datatypes::Utf8 value_) {
                value = std::move(value_);
                return *this;
            }

            MediaType(std::string value_) : value(std::move(value_)) {}

            MediaType& operator=(std::string value_) {
                value = std::move(value_);
                return *this;
            }

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::StringBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::StringBuilder* builder, const MediaType* elements, size_t num_elements
            );

            /// Creates a Rerun DataCell from an array of MediaType components.
            static Result<rerun::DataCell> to_data_cell(
                const MediaType* instances, size_t num_instances
            );
        };
    } // namespace components
} // namespace rerun
