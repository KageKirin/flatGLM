#ifndef FLATMATH_GLM_CONVERSION_HPP_INC
#define FLATMATH_GLM_CONVERSION_HPP_INC

#include "../typedefs.hpp"
#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

namespace flatmath
{
	glm::f32vec2   to_glm(const Vector2_f32&);
	glm::f32vec3   to_glm(const Vector3_f32&);
	glm::f32vec4   to_glm(const Vector4_f32&);
	glm::f32quat   to_glm(const Quaternion_f32&);
	glm::f32mat2x2 to_glm(const Matrix2x2_f32&);
	glm::f32mat2x3 to_glm(const Matrix2x3_f32&);
	glm::f32mat2x4 to_glm(const Matrix2x4_f32&);
	glm::f32mat3x2 to_glm(const Matrix3x2_f32&);
	glm::f32mat3x3 to_glm(const Matrix3x3_f32&);
	glm::f32mat3x4 to_glm(const Matrix3x4_f32&);
	glm::f32mat4x2 to_glm(const Matrix4x2_f32&);
	glm::f32mat4x3 to_glm(const Matrix4x3_f32&);
	glm::f32mat4x4 to_glm(const Matrix4x4_f32&);
	glm::f32vec3   to_glm(const ColorRGB_f32&);
	glm::f32vec4   to_glm(const ColorRGBA_f32&);
	glm::i32vec2   to_glm(const Vector2_i32&);
	glm::i32vec3   to_glm(const Vector3_i32&);
	glm::i32vec4   to_glm(const Vector4_i32&);
	// glm::i32quat to_glm(const Quaternion_i32&);
	// glm::i32mat2x2	 to_glm(const Matrix2x2_i32&);
	// glm::i32mat2x3	 to_glm(const Matrix2x3_i32&);
	// glm::i32mat2x4	 to_glm(const Matrix2x4_i32&);
	// glm::i32mat3x2	 to_glm(const Matrix3x2_i32&);
	// glm::i32mat3x3	 to_glm(const Matrix3x3_i32&);
	// glm::i32mat3x4	 to_glm(const Matrix3x4_i32&);
	// glm::i32mat4x2	 to_glm(const Matrix4x2_i32&);
	// glm::i32mat4x3	 to_glm(const Matrix4x3_i32&);
	// glm::i32mat4x4	 to_glm(const Matrix4x4_i32&);
	glm::i32vec3 to_glm(const ColorRGB_i32&);
	glm::i32vec4 to_glm(const ColorRGBA_i32&);
	glm::u32vec2 to_glm(const Vector2_u32&);
	glm::u32vec3 to_glm(const Vector3_u32&);
	glm::u32vec4 to_glm(const Vector4_u32&);
	// glm::u32quat to_glm(const Quaternion_u32&);
	// glm::u32mat2x2	 to_glm(const Matrix2x2_u32&);
	// glm::u32mat2x3	 to_glm(const Matrix2x3_u32&);
	// glm::u32mat2x4	 to_glm(const Matrix2x4_u32&);
	// glm::u32mat3x2	 to_glm(const Matrix3x2_u32&);
	// glm::u32mat3x3	 to_glm(const Matrix3x3_u32&);
	// glm::u32mat3x4	 to_glm(const Matrix3x4_u32&);
	// glm::u32mat4x2	 to_glm(const Matrix4x2_u32&);
	// glm::u32mat4x3	 to_glm(const Matrix4x3_u32&);
	// glm::u32mat4x4	 to_glm(const Matrix4x4_u32&);
	glm::u32vec3 to_glm(const ColorRGB_u32&);
	glm::u32vec4 to_glm(const ColorRGBA_u32&);
	glm::i16vec2 to_glm(const Vector2_i16&);
	glm::i16vec3 to_glm(const Vector3_i16&);
	glm::i16vec4 to_glm(const Vector4_i16&);
	// glm::i16quat to_glm(const Quaternion_i16&);
	// glm::i16mat2x2	 to_glm(const Matrix2x2_i16&);
	// glm::i16mat2x3	 to_glm(const Matrix2x3_i16&);
	// glm::i16mat2x4	 to_glm(const Matrix2x4_i16&);
	// glm::i16mat3x2	 to_glm(const Matrix3x2_i16&);
	// glm::i16mat3x3	 to_glm(const Matrix3x3_i16&);
	// glm::i16mat3x4	 to_glm(const Matrix3x4_i16&);
	// glm::i16mat4x2	 to_glm(const Matrix4x2_i16&);
	// glm::i16mat4x3	 to_glm(const Matrix4x3_i16&);
	// glm::i16mat4x4	 to_glm(const Matrix4x4_i16&);
	glm::i16vec3 to_glm(const ColorRGB_i16&);
	glm::i16vec4 to_glm(const ColorRGBA_i16&);
	glm::u16vec2 to_glm(const Vector2_u16&);
	glm::u16vec3 to_glm(const Vector3_u16&);
	glm::u16vec4 to_glm(const Vector4_u16&);
	// glm::u16quat to_glm(const Quaternion_u16&);
	// glm::u16mat2x2	 to_glm(const Matrix2x2_u16&);
	// glm::u16mat2x3	 to_glm(const Matrix2x3_u16&);
	// glm::u16mat2x4	 to_glm(const Matrix2x4_u16&);
	// glm::u16mat3x2	 to_glm(const Matrix3x2_u16&);
	// glm::u16mat3x3	 to_glm(const Matrix3x3_u16&);
	// glm::u16mat3x4	 to_glm(const Matrix3x4_u16&);
	// glm::u16mat4x2	 to_glm(const Matrix4x2_u16&);
	// glm::u16mat4x3	 to_glm(const Matrix4x3_u16&);
	// glm::u16mat4x4	 to_glm(const Matrix4x4_u16&);
	glm::u16vec3 to_glm(const ColorRGB_u16&);
	glm::u16vec4 to_glm(const ColorRGBA_u16&);
	glm::i8vec2  to_glm(const Vector2_i8&);
	glm::i8vec3  to_glm(const Vector3_i8&);
	glm::i8vec4  to_glm(const Vector4_i8&);
	// glm::i8quat  to_glm(const Quaternion_i8&);
	// glm::i8mat2x2	  to_glm(const Matrix2x2_i8&);
	// glm::i8mat2x3	  to_glm(const Matrix2x3_i8&);
	// glm::i8mat2x4	  to_glm(const Matrix2x4_i8&);
	// glm::i8mat3x2	  to_glm(const Matrix3x2_i8&);
	// glm::i8mat3x3	  to_glm(const Matrix3x3_i8&);
	// glm::i8mat3x4	  to_glm(const Matrix3x4_i8&);
	// glm::i8mat4x2	  to_glm(const Matrix4x2_i8&);
	// glm::i8mat4x3	  to_glm(const Matrix4x3_i8&);
	// glm::i8mat4x4	  to_glm(const Matrix4x4_i8&);
	glm::i8vec3 to_glm(const ColorRGB_i8&);
	glm::i8vec4 to_glm(const ColorRGBA_i8&);
	glm::u8vec2 to_glm(const Vector2_u8&);
	glm::u8vec3 to_glm(const Vector3_u8&);
	glm::u8vec4 to_glm(const Vector4_u8&);
	// glm::u8quat  to_glm(const Quaternion_u8&);
	// glm::u8mat2x2	  to_glm(const Matrix2x2_u8&);
	// glm::u8mat2x3	  to_glm(const Matrix2x3_u8&);
	// glm::u8mat2x4	  to_glm(const Matrix2x4_u8&);
	// glm::u8mat3x2	  to_glm(const Matrix3x2_u8&);
	// glm::u8mat3x3	  to_glm(const Matrix3x3_u8&);
	// glm::u8mat3x4	  to_glm(const Matrix3x4_u8&);
	// glm::u8mat4x2	  to_glm(const Matrix4x2_u8&);
	// glm::u8mat4x3	  to_glm(const Matrix4x3_u8&);
	// glm::u8mat4x4	  to_glm(const Matrix4x4_u8&);
	glm::u8vec3  to_glm(const ColorRGB_u8&);
	glm::u8vec4  to_glm(const ColorRGBA_u8&);
	glm::i64vec2 to_glm(const Vector2_i64&);
	glm::i64vec3 to_glm(const Vector3_i64&);
	glm::i64vec4 to_glm(const Vector4_i64&);
	// glm::i64quat to_glm(const Quaternion_i64&);
	// glm::i64mat2x2	 to_glm(const Matrix2x2_i64&);
	// glm::i64mat2x3	 to_glm(const Matrix2x3_i64&);
	// glm::i64mat2x4	 to_glm(const Matrix2x4_i64&);
	// glm::i64mat3x2	 to_glm(const Matrix3x2_i64&);
	// glm::i64mat3x3	 to_glm(const Matrix3x3_i64&);
	// glm::i64mat3x4	 to_glm(const Matrix3x4_i64&);
	// glm::i64mat4x2	 to_glm(const Matrix4x2_i64&);
	// glm::i64mat4x3	 to_glm(const Matrix4x3_i64&);
	// glm::i64mat4x4	 to_glm(const Matrix4x4_i64&);
	glm::i64vec3 to_glm(const ColorRGB_i64&);
	glm::i64vec4 to_glm(const ColorRGBA_i64&);
	glm::u64vec2 to_glm(const Vector2_u64&);
	glm::u64vec3 to_glm(const Vector3_u64&);
	glm::u64vec4 to_glm(const Vector4_u64&);
	// glm::u64quat to_glm(const Quaternion_u64&);
	// glm::u64mat2x2	 to_glm(const Matrix2x2_u64&);
	// glm::u64mat2x3	 to_glm(const Matrix2x3_u64&);
	// glm::u64mat2x4	 to_glm(const Matrix2x4_u64&);
	// glm::u64mat3x2	 to_glm(const Matrix3x2_u64&);
	// glm::u64mat3x3	 to_glm(const Matrix3x3_u64&);
	// glm::u64mat3x4	 to_glm(const Matrix3x4_u64&);
	// glm::u64mat4x2	 to_glm(const Matrix4x2_u64&);
	// glm::u64mat4x3	 to_glm(const Matrix4x3_u64&);
	// glm::u64mat4x4	 to_glm(const Matrix4x4_u64&);
	glm::u64vec3   to_glm(const ColorRGB_u64&);
	glm::u64vec4   to_glm(const ColorRGBA_u64&);
	glm::f64vec2   to_glm(const Vector2_f64&);
	glm::f64vec3   to_glm(const Vector3_f64&);
	glm::f64vec4   to_glm(const Vector4_f64&);
	glm::f64quat   to_glm(const Quaternion_f64&);
	glm::f64mat2x2 to_glm(const Matrix2x2_f64&);
	glm::f64mat2x3 to_glm(const Matrix2x3_f64&);
	glm::f64mat2x4 to_glm(const Matrix2x4_f64&);
	glm::f64mat3x2 to_glm(const Matrix3x2_f64&);
	glm::f64mat3x3 to_glm(const Matrix3x3_f64&);
	glm::f64mat3x4 to_glm(const Matrix3x4_f64&);
	glm::f64mat4x2 to_glm(const Matrix4x2_f64&);
	glm::f64mat4x3 to_glm(const Matrix4x3_f64&);
	glm::f64mat4x4 to_glm(const Matrix4x4_f64&);
	glm::f64vec3   to_glm(const ColorRGB_f64&);
	glm::f64vec4   to_glm(const ColorRGBA_f64&);


	glm::f32vec2   to_glm(const Vector2_f32*);
	glm::f32vec3   to_glm(const Vector3_f32*);
	glm::f32vec4   to_glm(const Vector4_f32*);
	glm::f32quat   to_glm(const Quaternion_f32*);
	glm::f32mat2x2 to_glm(const Matrix2x2_f32*);
	glm::f32mat2x3 to_glm(const Matrix2x3_f32*);
	glm::f32mat2x4 to_glm(const Matrix2x4_f32*);
	glm::f32mat3x2 to_glm(const Matrix3x2_f32*);
	glm::f32mat3x3 to_glm(const Matrix3x3_f32*);
	glm::f32mat3x4 to_glm(const Matrix3x4_f32*);
	glm::f32mat4x2 to_glm(const Matrix4x2_f32*);
	glm::f32mat4x3 to_glm(const Matrix4x3_f32*);
	glm::f32mat4x4 to_glm(const Matrix4x4_f32*);
	glm::f32vec3   to_glm(const ColorRGB_f32*);
	glm::f32vec4   to_glm(const ColorRGBA_f32*);
	glm::i32vec2   to_glm(const Vector2_i32*);
	glm::i32vec3   to_glm(const Vector3_i32*);
	glm::i32vec4   to_glm(const Vector4_i32*);
	// glm::i32quat to_glm(const Quaternion_i32*);
	// glm::i32mat2x2	 to_glm(const Matrix2x2_i32*);
	// glm::i32mat2x3	 to_glm(const Matrix2x3_i32*);
	// glm::i32mat2x4	 to_glm(const Matrix2x4_i32*);
	// glm::i32mat3x2	 to_glm(const Matrix3x2_i32*);
	// glm::i32mat3x3	 to_glm(const Matrix3x3_i32*);
	// glm::i32mat3x4	 to_glm(const Matrix3x4_i32*);
	// glm::i32mat4x2	 to_glm(const Matrix4x2_i32*);
	// glm::i32mat4x3	 to_glm(const Matrix4x3_i32*);
	// glm::i32mat4x4	 to_glm(const Matrix4x4_i32*);
	glm::i32vec3 to_glm(const ColorRGB_i32*);
	glm::i32vec4 to_glm(const ColorRGBA_i32*);
	glm::u32vec2 to_glm(const Vector2_u32*);
	glm::u32vec3 to_glm(const Vector3_u32*);
	glm::u32vec4 to_glm(const Vector4_u32*);
	// glm::u32quat to_glm(const Quaternion_u32*);
	// glm::u32mat2x2	 to_glm(const Matrix2x2_u32*);
	// glm::u32mat2x3	 to_glm(const Matrix2x3_u32*);
	// glm::u32mat2x4	 to_glm(const Matrix2x4_u32*);
	// glm::u32mat3x2	 to_glm(const Matrix3x2_u32*);
	// glm::u32mat3x3	 to_glm(const Matrix3x3_u32*);
	// glm::u32mat3x4	 to_glm(const Matrix3x4_u32*);
	// glm::u32mat4x2	 to_glm(const Matrix4x2_u32*);
	// glm::u32mat4x3	 to_glm(const Matrix4x3_u32*);
	// glm::u32mat4x4	 to_glm(const Matrix4x4_u32*);
	glm::u32vec3 to_glm(const ColorRGB_u32*);
	glm::u32vec4 to_glm(const ColorRGBA_u32*);
	glm::i16vec2 to_glm(const Vector2_i16*);
	glm::i16vec3 to_glm(const Vector3_i16*);
	glm::i16vec4 to_glm(const Vector4_i16*);
	// glm::i16quat to_glm(const Quaternion_i16*);
	// glm::i16mat2x2	 to_glm(const Matrix2x2_i16*);
	// glm::i16mat2x3	 to_glm(const Matrix2x3_i16*);
	// glm::i16mat2x4	 to_glm(const Matrix2x4_i16*);
	// glm::i16mat3x2	 to_glm(const Matrix3x2_i16*);
	// glm::i16mat3x3	 to_glm(const Matrix3x3_i16*);
	// glm::i16mat3x4	 to_glm(const Matrix3x4_i16*);
	// glm::i16mat4x2	 to_glm(const Matrix4x2_i16*);
	// glm::i16mat4x3	 to_glm(const Matrix4x3_i16*);
	// glm::i16mat4x4	 to_glm(const Matrix4x4_i16*);
	glm::i16vec3 to_glm(const ColorRGB_i16*);
	glm::i16vec4 to_glm(const ColorRGBA_i16*);
	glm::u16vec2 to_glm(const Vector2_u16*);
	glm::u16vec3 to_glm(const Vector3_u16*);
	glm::u16vec4 to_glm(const Vector4_u16*);
	// glm::u16quat to_glm(const Quaternion_u16*);
	// glm::u16mat2x2	 to_glm(const Matrix2x2_u16*);
	// glm::u16mat2x3	 to_glm(const Matrix2x3_u16*);
	// glm::u16mat2x4	 to_glm(const Matrix2x4_u16*);
	// glm::u16mat3x2	 to_glm(const Matrix3x2_u16*);
	// glm::u16mat3x3	 to_glm(const Matrix3x3_u16*);
	// glm::u16mat3x4	 to_glm(const Matrix3x4_u16*);
	// glm::u16mat4x2	 to_glm(const Matrix4x2_u16*);
	// glm::u16mat4x3	 to_glm(const Matrix4x3_u16*);
	// glm::u16mat4x4	 to_glm(const Matrix4x4_u16*);
	glm::u16vec3 to_glm(const ColorRGB_u16*);
	glm::u16vec4 to_glm(const ColorRGBA_u16*);
	glm::i8vec2  to_glm(const Vector2_i8*);
	glm::i8vec3  to_glm(const Vector3_i8*);
	glm::i8vec4  to_glm(const Vector4_i8*);
	// glm::i8quat  to_glm(const Quaternion_i8*);
	// glm::i8mat2x2	  to_glm(const Matrix2x2_i8*);
	// glm::i8mat2x3	  to_glm(const Matrix2x3_i8*);
	// glm::i8mat2x4	  to_glm(const Matrix2x4_i8*);
	// glm::i8mat3x2	  to_glm(const Matrix3x2_i8*);
	// glm::i8mat3x3	  to_glm(const Matrix3x3_i8*);
	// glm::i8mat3x4	  to_glm(const Matrix3x4_i8*);
	// glm::i8mat4x2	  to_glm(const Matrix4x2_i8*);
	// glm::i8mat4x3	  to_glm(const Matrix4x3_i8*);
	// glm::i8mat4x4	  to_glm(const Matrix4x4_i8*);
	glm::i8vec3 to_glm(const ColorRGB_i8*);
	glm::i8vec4 to_glm(const ColorRGBA_i8*);
	glm::u8vec2 to_glm(const Vector2_u8*);
	glm::u8vec3 to_glm(const Vector3_u8*);
	glm::u8vec4 to_glm(const Vector4_u8*);
	// glm::u8quat  to_glm(const Quaternion_u8*);
	// glm::u8mat2x2	  to_glm(const Matrix2x2_u8*);
	// glm::u8mat2x3	  to_glm(const Matrix2x3_u8*);
	// glm::u8mat2x4	  to_glm(const Matrix2x4_u8*);
	// glm::u8mat3x2	  to_glm(const Matrix3x2_u8*);
	// glm::u8mat3x3	  to_glm(const Matrix3x3_u8*);
	// glm::u8mat3x4	  to_glm(const Matrix3x4_u8*);
	// glm::u8mat4x2	  to_glm(const Matrix4x2_u8*);
	// glm::u8mat4x3	  to_glm(const Matrix4x3_u8*);
	// glm::u8mat4x4	  to_glm(const Matrix4x4_u8*);
	glm::u8vec3  to_glm(const ColorRGB_u8*);
	glm::u8vec4  to_glm(const ColorRGBA_u8*);
	glm::i64vec2 to_glm(const Vector2_i64*);
	glm::i64vec3 to_glm(const Vector3_i64*);
	glm::i64vec4 to_glm(const Vector4_i64*);
	// glm::i64quat to_glm(const Quaternion_i64*);
	// glm::i64mat2x2	 to_glm(const Matrix2x2_i64*);
	// glm::i64mat2x3	 to_glm(const Matrix2x3_i64*);
	// glm::i64mat2x4	 to_glm(const Matrix2x4_i64*);
	// glm::i64mat3x2	 to_glm(const Matrix3x2_i64*);
	// glm::i64mat3x3	 to_glm(const Matrix3x3_i64*);
	// glm::i64mat3x4	 to_glm(const Matrix3x4_i64*);
	// glm::i64mat4x2	 to_glm(const Matrix4x2_i64*);
	// glm::i64mat4x3	 to_glm(const Matrix4x3_i64*);
	// glm::i64mat4x4	 to_glm(const Matrix4x4_i64*);
	glm::i64vec3 to_glm(const ColorRGB_i64*);
	glm::i64vec4 to_glm(const ColorRGBA_i64*);
	glm::u64vec2 to_glm(const Vector2_u64*);
	glm::u64vec3 to_glm(const Vector3_u64*);
	glm::u64vec4 to_glm(const Vector4_u64*);
	// glm::u64quat to_glm(const Quaternion_u64*);
	// glm::u64mat2x2	 to_glm(const Matrix2x2_u64*);
	// glm::u64mat2x3	 to_glm(const Matrix2x3_u64*);
	// glm::u64mat2x4	 to_glm(const Matrix2x4_u64*);
	// glm::u64mat3x2	 to_glm(const Matrix3x2_u64*);
	// glm::u64mat3x3	 to_glm(const Matrix3x3_u64*);
	// glm::u64mat3x4	 to_glm(const Matrix3x4_u64*);
	// glm::u64mat4x2	 to_glm(const Matrix4x2_u64*);
	// glm::u64mat4x3	 to_glm(const Matrix4x3_u64*);
	// glm::u64mat4x4	 to_glm(const Matrix4x4_u64*);
	glm::u64vec3   to_glm(const ColorRGB_u64*);
	glm::u64vec4   to_glm(const ColorRGBA_u64*);
	glm::f64vec2   to_glm(const Vector2_f64*);
	glm::f64vec3   to_glm(const Vector3_f64*);
	glm::f64vec4   to_glm(const Vector4_f64*);
	glm::f64quat   to_glm(const Quaternion_f64*);
	glm::f64mat2x2 to_glm(const Matrix2x2_f64*);
	glm::f64mat2x3 to_glm(const Matrix2x3_f64*);
	glm::f64mat2x4 to_glm(const Matrix2x4_f64*);
	glm::f64mat3x2 to_glm(const Matrix3x2_f64*);
	glm::f64mat3x3 to_glm(const Matrix3x3_f64*);
	glm::f64mat3x4 to_glm(const Matrix3x4_f64*);
	glm::f64mat4x2 to_glm(const Matrix4x2_f64*);
	glm::f64mat4x3 to_glm(const Matrix4x3_f64*);
	glm::f64mat4x4 to_glm(const Matrix4x4_f64*);
	glm::f64vec3   to_glm(const ColorRGB_f64*);
	glm::f64vec4   to_glm(const ColorRGBA_f64*);


	Vector2_f32	from_glm(const glm::f32vec2&);
	Vector3_f32	from_glm(const glm::f32vec3&);
	Vector4_f32	from_glm(const glm::f32vec4&);
	Quaternion_f32 from_glm(const glm::f32quat&);
	Matrix2x2_f32  from_glm(const glm::f32mat2x2&);
	Matrix2x3_f32  from_glm(const glm::f32mat2x3&);
	Matrix2x4_f32  from_glm(const glm::f32mat2x4&);
	Matrix3x2_f32  from_glm(const glm::f32mat3x2&);
	Matrix3x3_f32  from_glm(const glm::f32mat3x3&);
	Matrix3x4_f32  from_glm(const glm::f32mat3x4&);
	Matrix4x2_f32  from_glm(const glm::f32mat4x2&);
	Matrix4x3_f32  from_glm(const glm::f32mat4x3&);
	Matrix4x4_f32  from_glm(const glm::f32mat4x4&);
	ColorRGB_f32   color_from_glm(const glm::f32vec3&);
	ColorRGBA_f32  color_from_glm(const glm::f32vec4&);
	Vector2_i32	from_glm(const glm::i32vec2&);
	Vector3_i32	from_glm(const glm::i32vec3&);
	Vector4_i32	from_glm(const glm::i32vec4&);
	// Quaternion_i32 from_glm(const glm::i32quat&);
	// Matrix2x2_i32  from_glm(const glm::i32mat2x2&);
	// Matrix2x3_i32  from_glm(const glm::i32mat2x3&);
	// Matrix2x4_i32  from_glm(const glm::i32mat2x4&);
	// Matrix3x2_i32  from_glm(const glm::i32mat3x2&);
	// Matrix3x3_i32  from_glm(const glm::i32mat3x3&);
	// Matrix3x4_i32  from_glm(const glm::i32mat3x4&);
	// Matrix4x2_i32  from_glm(const glm::i32mat4x2&);
	// Matrix4x3_i32  from_glm(const glm::i32mat4x3&);
	// Matrix4x4_i32  from_glm(const glm::i32mat4x4&);
	ColorRGB_i32  color_from_glm(const glm::i32vec3&);
	ColorRGBA_i32 color_from_glm(const glm::i32vec4&);
	Vector2_u32   from_glm(const glm::u32vec2&);
	Vector3_u32   from_glm(const glm::u32vec3&);
	Vector4_u32   from_glm(const glm::u32vec4&);
	// Quaternion_u32 from_glm(const glm::u32quat&);
	// Matrix2x2_u32  from_glm(const glm::u32mat2x2&);
	// Matrix2x3_u32  from_glm(const glm::u32mat2x3&);
	// Matrix2x4_u32  from_glm(const glm::u32mat2x4&);
	// Matrix3x2_u32  from_glm(const glm::u32mat3x2&);
	// Matrix3x3_u32  from_glm(const glm::u32mat3x3&);
	// Matrix3x4_u32  from_glm(const glm::u32mat3x4&);
	// Matrix4x2_u32  from_glm(const glm::u32mat4x2&);
	// Matrix4x3_u32  from_glm(const glm::u32mat4x3&);
	// Matrix4x4_u32  from_glm(const glm::u32mat4x4&);
	ColorRGB_u32  color_from_glm(const glm::u32vec3&);
	ColorRGBA_u32 color_from_glm(const glm::u32vec4&);
	Vector2_i16   from_glm(const glm::i16vec2&);
	Vector3_i16   from_glm(const glm::i16vec3&);
	Vector4_i16   from_glm(const glm::i16vec4&);
	// Quaternion_i16 from_glm(const glm::i16quat&);
	// Matrix2x2_i16  from_glm(const glm::i16mat2x2&);
	// Matrix2x3_i16  from_glm(const glm::i16mat2x3&);
	// Matrix2x4_i16  from_glm(const glm::i16mat2x4&);
	// Matrix3x2_i16  from_glm(const glm::i16mat3x2&);
	// Matrix3x3_i16  from_glm(const glm::i16mat3x3&);
	// Matrix3x4_i16  from_glm(const glm::i16mat3x4&);
	// Matrix4x2_i16  from_glm(const glm::i16mat4x2&);
	// Matrix4x3_i16  from_glm(const glm::i16mat4x3&);
	// Matrix4x4_i16  from_glm(const glm::i16mat4x4&);
	ColorRGB_i16  color_from_glm(const glm::i16vec3&);
	ColorRGBA_i16 color_from_glm(const glm::i16vec4&);
	Vector2_u16   from_glm(const glm::u16vec2&);
	Vector3_u16   from_glm(const glm::u16vec3&);
	Vector4_u16   from_glm(const glm::u16vec4&);
	// Quaternion_u16 from_glm(const glm::u16quat&);
	// Matrix2x2_u16  from_glm(const glm::u16mat2x2&);
	// Matrix2x3_u16  from_glm(const glm::u16mat2x3&);
	// Matrix2x4_u16  from_glm(const glm::u16mat2x4&);
	// Matrix3x2_u16  from_glm(const glm::u16mat3x2&);
	// Matrix3x3_u16  from_glm(const glm::u16mat3x3&);
	// Matrix3x4_u16  from_glm(const glm::u16mat3x4&);
	// Matrix4x2_u16  from_glm(const glm::u16mat4x2&);
	// Matrix4x3_u16  from_glm(const glm::u16mat4x3&);
	// Matrix4x4_u16  from_glm(const glm::u16mat4x4&);
	ColorRGB_u16  color_from_glm(const glm::u16vec3&);
	ColorRGBA_u16 color_from_glm(const glm::u16vec4&);
	Vector2_i8	from_glm(const glm::i8vec2&);
	Vector3_i8	from_glm(const glm::i8vec3&);
	Vector4_i8	from_glm(const glm::i8vec4&);
	// Quaternion_i8  from_glm(const glm::i8quat&);
	// Matrix2x2_i8   from_glm(const glm::i8mat2x2&);
	// Matrix2x3_i8   from_glm(const glm::i8mat2x3&);
	// Matrix2x4_i8   from_glm(const glm::i8mat2x4&);
	// Matrix3x2_i8   from_glm(const glm::i8mat3x2&);
	// Matrix3x3_i8   from_glm(const glm::i8mat3x3&);
	// Matrix3x4_i8   from_glm(const glm::i8mat3x4&);
	// Matrix4x2_i8   from_glm(const glm::i8mat4x2&);
	// Matrix4x3_i8   from_glm(const glm::i8mat4x3&);
	// Matrix4x4_i8   from_glm(const glm::i8mat4x4&);
	ColorRGB_i8  color_from_glm(const glm::i8vec3&);
	ColorRGBA_i8 color_from_glm(const glm::i8vec4&);
	Vector2_u8   from_glm(const glm::u8vec2&);
	Vector3_u8   from_glm(const glm::u8vec3&);
	Vector4_u8   from_glm(const glm::u8vec4&);
	// Quaternion_u8  from_glm(const glm::u8quat&);
	// Matrix2x2_u8   from_glm(const glm::u8mat2x2&);
	// Matrix2x3_u8   from_glm(const glm::u8mat2x3&);
	// Matrix2x4_u8   from_glm(const glm::u8mat2x4&);
	// Matrix3x2_u8   from_glm(const glm::u8mat3x2&);
	// Matrix3x3_u8   from_glm(const glm::u8mat3x3&);
	// Matrix3x4_u8   from_glm(const glm::u8mat3x4&);
	// Matrix4x2_u8   from_glm(const glm::u8mat4x2&);
	// Matrix4x3_u8   from_glm(const glm::u8mat4x3&);
	// Matrix4x4_u8   from_glm(const glm::u8mat4x4&);
	ColorRGB_u8  color_from_glm(const glm::u8vec3&);
	ColorRGBA_u8 color_from_glm(const glm::u8vec4&);
	Vector2_i64  from_glm(const glm::i64vec2&);
	Vector3_i64  from_glm(const glm::i64vec3&);
	Vector4_i64  from_glm(const glm::i64vec4&);
	// Quaternion_i64 from_glm(const glm::i64quat&);
	// Matrix2x2_i64  from_glm(const glm::i64mat2x2&);
	// Matrix2x3_i64  from_glm(const glm::i64mat2x3&);
	// Matrix2x4_i64  from_glm(const glm::i64mat2x4&);
	// Matrix3x2_i64  from_glm(const glm::i64mat3x2&);
	// Matrix3x3_i64  from_glm(const glm::i64mat3x3&);
	// Matrix3x4_i64  from_glm(const glm::i64mat3x4&);
	// Matrix4x2_i64  from_glm(const glm::i64mat4x2&);
	// Matrix4x3_i64  from_glm(const glm::i64mat4x3&);
	// Matrix4x4_i64  from_glm(const glm::i64mat4x4&);
	ColorRGB_i64  color_from_glm(const glm::i64vec3&);
	ColorRGBA_i64 color_from_glm(const glm::i64vec4&);
	Vector2_u64   from_glm(const glm::u64vec2&);
	Vector3_u64   from_glm(const glm::u64vec3&);
	Vector4_u64   from_glm(const glm::u64vec4&);
	// Quaternion_u64 from_glm(const glm::u64quat&);
	// Matrix2x2_u64  from_glm(const glm::u64mat2x2&);
	// Matrix2x3_u64  from_glm(const glm::u64mat2x3&);
	// Matrix2x4_u64  from_glm(const glm::u64mat2x4&);
	// Matrix3x2_u64  from_glm(const glm::u64mat3x2&);
	// Matrix3x3_u64  from_glm(const glm::u64mat3x3&);
	// Matrix3x4_u64  from_glm(const glm::u64mat3x4&);
	// Matrix4x2_u64  from_glm(const glm::u64mat4x2&);
	// Matrix4x3_u64  from_glm(const glm::u64mat4x3&);
	// Matrix4x4_u64  from_glm(const glm::u64mat4x4&);
	ColorRGB_u64   color_from_glm(const glm::u64vec3&);
	ColorRGBA_u64  color_from_glm(const glm::u64vec4&);
	Vector2_f64	from_glm(const glm::f64vec2&);
	Vector3_f64	from_glm(const glm::f64vec3&);
	Vector4_f64	from_glm(const glm::f64vec4&);
	Quaternion_f64 from_glm(const glm::f64quat&);
	Matrix2x2_f64  from_glm(const glm::f64mat2x2&);
	Matrix2x3_f64  from_glm(const glm::f64mat2x3&);
	Matrix2x4_f64  from_glm(const glm::f64mat2x4&);
	Matrix3x2_f64  from_glm(const glm::f64mat3x2&);
	Matrix3x3_f64  from_glm(const glm::f64mat3x3&);
	Matrix3x4_f64  from_glm(const glm::f64mat3x4&);
	Matrix4x2_f64  from_glm(const glm::f64mat4x2&);
	Matrix4x3_f64  from_glm(const glm::f64mat4x3&);
	Matrix4x4_f64  from_glm(const glm::f64mat4x4&);
	ColorRGB_f64   color_from_glm(const glm::f64vec3&);
	ColorRGBA_f64  color_from_glm(const glm::f64vec4&);

}	// namespace flatmath

#endif	// !FLATMATH_GLM_CONVERSION_HPP_INC