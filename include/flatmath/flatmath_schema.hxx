#include <string>

extern const std::string flatmath_schema; // for linker happiness
const std::string flatmath_schema(
R"(// Flatbuffer schema for generic math types (Linear Algebra)

namespace flatmath;

///-----------------------------------------------------------------------------
/// float types

/// 2D vector of floats
struct Vector2_f32 {
	x: float;
	y: float;
}

/// 3D vector of floats
struct Vector3_f32 {
	x: float;
	y: float;
	z: float;
}

/// 4D vector of floats (homogenous coordinates)
struct Vector4_f32 {
	x: float;
	y: float;
	z: float;
	w: float;
}

/// 4D hypercomplex of floats
struct Quaternion_f32 {
	x: float;
	y: float;
	z: float;
	w: float;
}

/// 2x2 matrix of floats
struct Matrix2x2_f32 {
	_0: Vector2_f32;
	_1: Vector2_f32;
}

/// 2x3 matrix of floats
struct Matrix2x3_f32 {
	_0: Vector3_f32;
	_1: Vector3_f32;
}

/// 2x4 matrix of floats
struct Matrix2x4_f32 {
	_0: Vector4_f32;
	_1: Vector4_f32;
}

/// 3x2 matrix of floats
struct Matrix3x2_f32 {
	_0: Vector2_f32;
	_1: Vector2_f32;
	_2: Vector2_f32;
}

/// 3x3 matrix of floats
struct Matrix3x3_f32 {
	_0: Vector3_f32;
	_1: Vector3_f32;
	_2: Vector3_f32;
}

/// 3x4 matrix of floats
struct Matrix3x4_f32 {
	_0: Vector4_f32;
	_1: Vector4_f32;
	_2: Vector4_f32;
}

/// 4x2 matrix of floats
struct Matrix4x2_f32 {
	_0: Vector2_f32;
	_1 : Vector2_f32;
	_2 : Vector2_f32;
	_3 : Vector2_f32;
}

/// 4x3 matrix of floats
struct Matrix4x3_f32 {
	_0 : Vector3_f32;
	_1 : Vector3_f32;
	_2 : Vector3_f32;
	_3 : Vector3_f32;
}

/// 4x4 matrix of floats
struct Matrix4x4_f32 {
	_0 : Vector4_f32;
	_1 : Vector4_f32;
	_2 : Vector4_f32;
	_3 : Vector4_f32;
}

/// RGB color of float components
struct ColorRGB_f32 {
	r : float;
	g : float;
	b : float;
}

/// RGBA color of float components
struct ColorRGBA_f32 {
	r : float;
	g : float;
	b : float;
	a : float;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// int types

/// 2D vector of ints
struct Vector2_i32 {
	x : int;
	y : int;
}

/// 3D vector of ints
struct Vector3_i32 {
	x : int;
	y : int;
	z : int;
}

/// 4D vector of ints (homogenous coordinates)
struct Vector4_i32 {
	x : int;
	y : int;
	z : int;
	w : int;
}

/// 4D hypercomplex of ints
struct Quaternion_i32 {
	x : int;
	y : int;
	z : int;
	w : int;
}

/// 2x2 matrix of ints
struct Matrix2x2_i32 {
	_0 : Vector2_i32;
	_1 : Vector2_i32;
}

/// 2x3 matrix of ints
struct Matrix2x3_i32 {
	_0 : Vector3_i32;
	_1 : Vector3_i32;
}

/// 2x4 matrix of ints
struct Matrix2x4_i32 {
	_0 : Vector4_i32;
	_1 : Vector4_i32;
}

/// 3x2 matrix of ints
struct Matrix3x2_i32 {
	_0 : Vector2_i32;
	_1 : Vector2_i32;
	_2 : Vector2_i32;
}

/// 3x3 matrix of ints
struct Matrix3x3_i32 {
	_0 : Vector3_i32;
	_1 : Vector3_i32;
	_2 : Vector3_i32;
}

/// 3x4 matrix of ints
struct Matrix3x4_i32 {
	_0 : Vector4_i32;
	_1 : Vector4_i32;
	_2 : Vector4_i32;
}

/// 4x2 matrix of ints
struct Matrix4x2_i32 {
	_0 : Vector2_i32;
	_1 : Vector2_i32;
	_2 : Vector2_i32;
	_3 : Vector2_i32;
}

/// 4x3 matrix of ints
struct Matrix4x3_i32 {
	_0 : Vector3_i32;
	_1 : Vector3_i32;
	_2 : Vector3_i32;
	_3 : Vector3_i32;
}

/// 4x4 matrix of ints
struct Matrix4x4_i32 {
	_0 : Vector4_i32;
	_1 : Vector4_i32;
	_2 : Vector4_i32;
	_3 : Vector4_i32;
}

/// RGB color of int components
struct ColorRGB_i32 {
	r : int;
	g : int;
	b : int;
}

/// RGBA color of int components
struct ColorRGBA_i32 {
	r : int;
	g : int;
	b : int;
	a : int;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// uint types

/// 2D vector of uints
struct Vector2_u32 {
	x : uint;
	y : uint;
}

/// 3D vector of uints
struct Vector3_u32 {
	x : uint;
	y : uint;
	z : uint;
}

/// 4D vector of uints (homogenous coordinates)
struct Vector4_u32 {
	x : uint;
	y : uint;
	z : uint;
	w : uint;
}

/// 4D hypercomplex of uints
struct Quaternion_u32 {
	x : uint;
	y : uint;
	z : uint;
	w : uint;
}

/// 2x2 matrix of uints
struct Matrix2x2_u32 {
	_0 : Vector2_u32;
	_1 : Vector2_u32;
}

/// 2x3 matrix of uints
struct Matrix2x3_u32 {
	_0 : Vector3_u32;
	_1 : Vector3_u32;
}

/// 2x4 matrix of uints
struct Matrix2x4_u32 {
	_0 : Vector4_u32;
	_1 : Vector4_u32;
}

/// 3x2 matrix of uints
struct Matrix3x2_u32 {
	_0 : Vector2_u32;
	_1 : Vector2_u32;
	_2 : Vector2_u32;
}

/// 3x3 matrix of uints
struct Matrix3x3_u32 {
	_0 : Vector3_u32;
	_1 : Vector3_u32;
	_2 : Vector3_u32;
}

/// 3x4 matrix of uints
struct Matrix3x4_u32 {
	_0 : Vector4_u32;
	_1 : Vector4_u32;
	_2 : Vector4_u32;
}

/// 4x2 matrix of uints
struct Matrix4x2_u32 {
	_0 : Vector2_u32;
	_1 : Vector2_u32;
	_2 : Vector2_u32;
	_3 : Vector2_u32;
}

/// 4x3 matrix of uints
struct Matrix4x3_u32 {
	_0 : Vector3_u32;
	_1 : Vector3_u32;
	_2 : Vector3_u32;
	_3 : Vector3_u32;
}

/// 4x4 matrix of uints
struct Matrix4x4_u32 {
	_0 : Vector4_u32;
	_1 : Vector4_u32;
	_2 : Vector4_u32;
	_3 : Vector4_u32;
}

/// RGB color of uint components
struct ColorRGB_u32 {
	r : uint;
	g : uint;
	b : uint;
}

/// RGBA color of uint components
struct ColorRGBA_u32 {
	r : uint;
	g : uint;
	b : uint;
	a : uint;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// short types

/// 2D vector of shorts
struct Vector2_i16 {
	x : short;
	y : short;
}

/// 3D vector of shorts
struct Vector3_i16 {
	x : short;
	y : short;
	z : short;
}

/// 4D vector of shorts (homogenous coordinates)
struct Vector4_i16 {
	x : short;
	y : short;
	z : short;
	w : short;
}

/// 4D hypercomplex of shorts
struct Quaternion_i16 {
	x : short;
	y : short;
	z : short;
	w : short;
}

/// 2x2 matrix of shorts
struct Matrix2x2_i16 {
	_0 : Vector2_i16;
	_1 : Vector2_i16;
}

/// 2x3 matrix of shorts
struct Matrix2x3_i16 {
	_0 : Vector3_i16;
	_1 : Vector3_i16;
}

/// 2x4 matrix of shorts
struct Matrix2x4_i16 {
	_0 : Vector4_i16;
	_1 : Vector4_i16;
}

/// 3x2 matrix of shorts
struct Matrix3x2_i16 {
	_0 : Vector2_i16;
	_1 : Vector2_i16;
	_2 : Vector2_i16;
}

/// 3x3 matrix of shorts
struct Matrix3x3_i16 {
	_0 : Vector3_i16;
	_1 : Vector3_i16;
	_2 : Vector3_i16;
}

/// 3x4 matrix of shorts
struct Matrix3x4_i16 {
	_0 : Vector4_i16;
	_1 : Vector4_i16;
	_2 : Vector4_i16;
}

/// 4x2 matrix of shorts
struct Matrix4x2_i16 {
	_0 : Vector2_i16;
	_1 : Vector2_i16;
	_2 : Vector2_i16;
	_3 : Vector2_i16;
}

/// 4x3 matrix of shorts
struct Matrix4x3_i16 {
	_0 : Vector3_i16;
	_1 : Vector3_i16;
	_2 : Vector3_i16;
	_3 : Vector3_i16;
}

/// 4x4 matrix of shorts
struct Matrix4x4_i16 {
	_0 : Vector4_i16;
	_1 : Vector4_i16;
	_2 : Vector4_i16;
	_3 : Vector4_i16;
}

/// RGB color of short components
struct ColorRGB_i16 {
	r : short;
	g : short;
	b : short;
}

/// RGBA color of short components
struct ColorRGBA_i16 {
	r : short;
	g : short;
	b : short;
	a : short;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ushort types

/// 2D vector of ushorts
struct Vector2_u16 {
	x : ushort;
	y : ushort;
}

/// 3D vector of ushorts
struct Vector3_u16 {
	x : ushort;
	y : ushort;
	z : ushort;
}

/// 4D vector of ushorts (homogenous coordinates)
struct Vector4_u16 {
	x : ushort;
	y : ushort;
	z : ushort;
	w : ushort;
}

/// 4D hypercomplex of ushorts
struct Quaternion_u16 {
	x : ushort;
	y : ushort;
	z : ushort;
	w : ushort;
}

/// 2x2 matrix of ushorts
struct Matrix2x2_u16 {
	_0 : Vector2_u16;
	_1 : Vector2_u16;
}

/// 2x3 matrix of ushorts
struct Matrix2x3_u16 {
	_0 : Vector3_u16;
	_1 : Vector3_u16;
}

/// 2x4 matrix of ushorts
struct Matrix2x4_u16 {
	_0 : Vector4_u16;
	_1 : Vector4_u16;
}

/// 3x2 matrix of ushorts
struct Matrix3x2_u16 {
	_0 : Vector2_u16;
	_1 : Vector2_u16;
	_2 : Vector2_u16;
}

/// 3x3 matrix of ushorts
struct Matrix3x3_u16 {
	_0 : Vector3_u16;
	_1 : Vector3_u16;
	_2 : Vector3_u16;
}

/// 3x4 matrix of ushorts
struct Matrix3x4_u16 {
	_0 : Vector4_u16;
	_1 : Vector4_u16;
	_2 : Vector4_u16;
}

/// 4x2 matrix of ushorts
struct Matrix4x2_u16 {
	_0 : Vector2_u16;
	_1 : Vector2_u16;
	_2 : Vector2_u16;
	_3 : Vector2_u16;
}

/// 4x3 matrix of ushorts
struct Matrix4x3_u16 {
	_0 : Vector3_u16;
	_1 : Vector3_u16;
	_2 : Vector3_u16;
	_3 : Vector3_u16;
}

/// 4x4 matrix of ushorts
struct Matrix4x4_u16 {
	_0 : Vector4_u16;
	_1 : Vector4_u16;
	_2 : Vector4_u16;
	_3 : Vector4_u16;
}

/// RGB color of ushort components
struct ColorRGB_u16 {
	r : ushort;
	g : ushort;
	b : ushort;
}

/// RGBA color of ushort components
struct ColorRGBA_u16 {
	r : ushort;
	g : ushort;
	b : ushort;
	a : ushort;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// byte types

/// 2D vector of bytes
struct Vector2_i8 {
	x : byte;
	y : byte;
}

/// 3D vector of bytes
struct Vector3_i8 {
	x : byte;
	y : byte;
	z : byte;
}

/// 4D vector of bytes (homogenous coordinates)
struct Vector4_i8 {
	x : byte;
	y : byte;
	z : byte;
	w : byte;
}

/// 4D hypercomplex of bytes
struct Quaternion_i8 {
	x : byte;
	y : byte;
	z : byte;
	w : byte;
}

/// 2x2 matrix of bytes
struct Matrix2x2_i8 {
	_0 : Vector2_i8;
	_1 : Vector2_i8;
}

/// 2x3 matrix of bytes
struct Matrix2x3_i8 {
	_0 : Vector3_i8;
	_1 : Vector3_i8;
}

/// 2x4 matrix of bytes
struct Matrix2x4_i8 {
	_0 : Vector4_i8;
	_1 : Vector4_i8;
}

/// 3x2 matrix of bytes
struct Matrix3x2_i8 {
	_0 : Vector2_i8;
	_1 : Vector2_i8;
	_2 : Vector2_i8;
}

/// 3x3 matrix of bytes
struct Matrix3x3_i8 {
	_0 : Vector3_i8;
	_1 : Vector3_i8;
	_2 : Vector3_i8;
}

/// 3x4 matrix of bytes
struct Matrix3x4_i8 {
	_0 : Vector4_i8;
	_1 : Vector4_i8;
	_2 : Vector4_i8;
}

/// 4x2 matrix of bytes
struct Matrix4x2_i8 {
	_0 : Vector2_i8;
	_1 : Vector2_i8;
	_2 : Vector2_i8;
	_3 : Vector2_i8;
}

/// 4x3 matrix of bytes
struct Matrix4x3_i8 {
	_0 : Vector3_i8;
	_1 : Vector3_i8;
	_2 : Vector3_i8;
	_3 : Vector3_i8;
}

/// 4x4 matrix of bytes
struct Matrix4x4_i8 {
	_0 : Vector4_i8;
	_1 : Vector4_i8;
	_2 : Vector4_i8;
	_3 : Vector4_i8;
}

/// RGB color of byte components
struct ColorRGB_i8 {
	r : byte;
	g : byte;
	b : byte;
}

/// RGBA color of byte components
struct ColorRGBA_i8 {
	r : byte;
	g : byte;
	b : byte;
	a : byte;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ubyte types

/// 2D vector of ubytes
struct Vector2_u8 {
	x : ubyte;
	y : ubyte;
}

/// 3D vector of ubytes
struct Vector3_u8 {
	x : ubyte;
	y : ubyte;
	z : ubyte;
}

/// 4D vector of ubytes (homogenous coordinates)
struct Vector4_u8 {
	x : ubyte;
	y : ubyte;
	z : ubyte;
	w : ubyte;
}

/// 4D hypercomplex of ubytes
struct Quaternion_u8 {
	x : ubyte;
	y : ubyte;
	z : ubyte;
	w : ubyte;
}

/// 2x2 matrix of ubytes
struct Matrix2x2_u8 {
	_0 : Vector2_u8;
	_1 : Vector2_u8;
}

/// 2x3 matrix of ubytes
struct Matrix2x3_u8 {
	_0 : Vector3_u8;
	_1 : Vector3_u8;
}

/// 2x4 matrix of ubytes
struct Matrix2x4_u8 {
	_0 : Vector4_u8;
	_1 : Vector4_u8;
}

/// 3x2 matrix of ubytes
struct Matrix3x2_u8 {
	_0 : Vector2_u8;
	_1 : Vector2_u8;
	_2 : Vector2_u8;
}

/// 3x3 matrix of ubytes
struct Matrix3x3_u8 {
	_0 : Vector3_u8;
	_1 : Vector3_u8;
	_2 : Vector3_u8;
}

/// 3x4 matrix of ubytes
struct Matrix3x4_u8 {
	_0 : Vector4_u8;
	_1 : Vector4_u8;
	_2 : Vector4_u8;
}

/// 4x2 matrix of ubytes
struct Matrix4x2_u8 {
	_0 : Vector2_u8;
	_1 : Vector2_u8;
	_2 : Vector2_u8;
	_3 : Vector2_u8;
}

/// 4x3 matrix of ubytes
struct Matrix4x3_u8 {
	_0 : Vector3_u8;
	_1 : Vector3_u8;
	_2 : Vector3_u8;
	_3 : Vector3_u8;
}

/// 4x4 matrix of ubytes
struct Matrix4x4_u8 {
	_0 : Vector4_u8;
	_1 : Vector4_u8;
	_2 : Vector4_u8;
	_3 : Vector4_u8;
}

/// RGB color of ubyte components
struct ColorRGB_u8 {
	r : ubyte;
	g : ubyte;
	b : ubyte;
}

/// RGBA color of ubyte components
struct ColorRGBA_u8 {
	r : ubyte;
	g : ubyte;
	b : ubyte;
	a : ubyte;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// long types

/// 2D vector of longs
struct Vector2_i64 {
	x : long;
	y : long;
}

/// 3D vector of longs
struct Vector3_i64 {
	x : long;
	y : long;
	z : long;
}

/// 4D vector of longs (homogenous coordinates)
struct Vector4_i64 {
	x : long;
	y : long;
	z : long;
	w : long;
}

/// 4D hypercomplex of longs
struct Quaternion_i64 {
	x : long;
	y : long;
	z : long;
	w : long;
}

/// 2x2 matrix of longs
struct Matrix2x2_i64 {
	_0 : Vector2_i64;
	_1 : Vector2_i64;
}

/// 2x3 matrix of longs
struct Matrix2x3_i64 {
	_0 : Vector3_i64;
	_1 : Vector3_i64;
}

/// 2x4 matrix of longs
struct Matrix2x4_i64 {
	_0 : Vector4_i64;
	_1 : Vector4_i64;
}

/// 3x2 matrix of longs
struct Matrix3x2_i64 {
	_0 : Vector2_i64;
	_1 : Vector2_i64;
	_2 : Vector2_i64;
}

/// 3x3 matrix of longs
struct Matrix3x3_i64 {
	_0 : Vector3_i64;
	_1 : Vector3_i64;
	_2 : Vector3_i64;
}

/// 3x4 matrix of longs
struct Matrix3x4_i64 {
	_0 : Vector4_i64;
	_1 : Vector4_i64;
	_2 : Vector4_i64;
}

/// 4x2 matrix of longs
struct Matrix4x2_i64 {
	_0 : Vector2_i64;
	_1 : Vector2_i64;
	_2 : Vector2_i64;
	_3 : Vector2_i64;
}

/// 4x3 matrix of longs
struct Matrix4x3_i64 {
	_0 : Vector3_i64;
	_1 : Vector3_i64;
	_2 : Vector3_i64;
	_3 : Vector3_i64;
}

/// 4x4 matrix of longs
struct Matrix4x4_i64 {
	_0 : Vector4_i64;
	_1 : Vector4_i64;
	_2 : Vector4_i64;
	_3 : Vector4_i64;
}

/// RGB color of long components
struct ColorRGB_i64 {
	r : long;
	g : long;
	b : long;
}

/// RGBA color of long components
struct ColorRGBA_i64 {
	r : long;
	g : long;
	b : long;
	a : long;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ulong types

/// 2D vector of ulongs
struct Vector2_u64 {
	x : ulong;
	y : ulong;
}

/// 3D vector of ulongs
struct Vector3_u64 {
	x : ulong;
	y : ulong;
	z : ulong;
}

/// 4D vector of ulongs (homogenous coordinates)
struct Vector4_u64 {
	x : ulong;
	y : ulong;
	z : ulong;
	w : ulong;
}

/// 4D hypercomplex of ulongs
struct Quaternion_u64 {
	x : ulong;
	y : ulong;
	z : ulong;
	w : ulong;
}

/// 2x2 matrix of ulongs
struct Matrix2x2_u64 {
	_0 : Vector2_u64;
	_1 : Vector2_u64;
}

/// 2x3 matrix of ulongs
struct Matrix2x3_u64 {
	_0 : Vector3_u64;
	_1 : Vector3_u64;
}

/// 2x4 matrix of ulongs
struct Matrix2x4_u64 {
	_0 : Vector4_u64;
	_1 : Vector4_u64;
}

/// 3x2 matrix of ulongs
struct Matrix3x2_u64 {
	_0 : Vector2_u64;
	_1 : Vector2_u64;
	_2 : Vector2_u64;
}

/// 3x3 matrix of ulongs
struct Matrix3x3_u64 {
	_0 : Vector3_u64;
	_1 : Vector3_u64;
	_2 : Vector3_u64;
}

/// 3x4 matrix of ulongs
struct Matrix3x4_u64 {
	_0 : Vector4_u64;
	_1 : Vector4_u64;
	_2 : Vector4_u64;
}

/// 4x2 matrix of ulongs
struct Matrix4x2_u64 {
	_0 : Vector2_u64;
	_1 : Vector2_u64;
	_2 : Vector2_u64;
	_3 : Vector2_u64;
}

/// 4x3 matrix of ulongs
struct Matrix4x3_u64 {
	_0 : Vector3_u64;
	_1 : Vector3_u64;
	_2 : Vector3_u64;
	_3 : Vector3_u64;
}

/// 4x4 matrix of ulongs
struct Matrix4x4_u64 {
	_0 : Vector4_u64;
	_1 : Vector4_u64;
	_2 : Vector4_u64;
	_3 : Vector4_u64;
}

/// RGB color of ulong components
struct ColorRGB_u64 {
	r : ulong;
	g : ulong;
	b : ulong;
}

/// RGBA color of ulong components
struct ColorRGBA_u64 {
	r : ulong;
	g : ulong;
	b : ulong;
	a : ulong;
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// double types

/// 2D vector of doubles
struct Vector2_f64 {
	x : double;
	y : double;
}

/// 3D vector of doubles
struct Vector3_f64 {
	x : double;
	y : double;
	z : double;
}

/// 4D vector of doubles (homogenous coordinates)
struct Vector4_f64 {
	x : double;
	y : double;
	z : double;
	w : double;
}

/// 4D hypercomplex of doubles
struct Quaternion_f64 {
	x : double;
	y : double;
	z : double;
	w : double;
}

/// 2x2 matrix of doubles
struct Matrix2x2_f64 {
	_0 : Vector2_f64;
	_1 : Vector2_f64;
}

/// 2x3 matrix of doubles
struct Matrix2x3_f64 {
	_0 : Vector3_f64;
	_1 : Vector3_f64;
}

/// 2x4 matrix of doubles
struct Matrix2x4_f64 {
	_0 : Vector4_f64;
	_1 : Vector4_f64;
}

/// 3x2 matrix of doubles
struct Matrix3x2_f64 {
	_0 : Vector2_f64;
	_1 : Vector2_f64;
	_2 : Vector2_f64;
}

/// 3x3 matrix of doubles
struct Matrix3x3_f64 {
	_0 : Vector3_f64;
	_1 : Vector3_f64;
	_2 : Vector3_f64;
}

/// 3x4 matrix of doubles
struct Matrix3x4_f64 {
	_0 : Vector4_f64;
	_1 : Vector4_f64;
	_2 : Vector4_f64;
}

/// 4x2 matrix of doubles
struct Matrix4x2_f64 {
	_0: Vector2_f64;
	_1: Vector2_f64;
	_2: Vector2_f64;
	_3: Vector2_f64;
}

/// 4x3 matrix of doubles
struct Matrix4x3_f64 {
	_0: Vector3_f64;
	_1: Vector3_f64;
	_2: Vector3_f64;
	_3: Vector3_f64;
}

/// 4x4 matrix of doubles
struct Matrix4x4_f64 {
	_0: Vector4_f64;
	_1: Vector4_f64;
	_2: Vector4_f64;
	_3: Vector4_f64;
}

/// RGB color of double components
struct ColorRGB_f64 {
	r: double;
	g: double;
	b: double;
}

/// RGBA color of double components
struct ColorRGBA_f64 {
	r: double;
	g: double;
	b: double;
	a: double;
}

///-----------------------------------------------------------------------------

)");
