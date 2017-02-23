// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4x2 matrix of ints
type Matrix4x2_i32 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix4x2_i32) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix4x2_i32) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix4x2_i32) _0(obj *Vector2_i32) *Vector2_i32 {
	if obj == nil {
		obj = new(Vector2_i32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix4x2_i32) _1(obj *Vector2_i32) *Vector2_i32 {
	if obj == nil {
		obj = new(Vector2_i32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+8)
	return obj
}
func (rcv *Matrix4x2_i32) _2(obj *Vector2_i32) *Vector2_i32 {
	if obj == nil {
		obj = new(Vector2_i32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+16)
	return obj
}
func (rcv *Matrix4x2_i32) _3(obj *Vector2_i32) *Vector2_i32 {
	if obj == nil {
		obj = new(Vector2_i32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+24)
	return obj
}

func CreateMatrix4x2_i32(builder *flatbuffers.Builder, _0_x int32, _0_y int32, _1_x int32, _1_y int32, _2_x int32, _2_y int32, _3_x int32, _3_y int32) flatbuffers.UOffsetT {
	builder.Prep(4, 32)
	builder.Prep(4, 8)
	builder.PrependInt32(_3_y)
	builder.PrependInt32(_3_x)
	builder.Prep(4, 8)
	builder.PrependInt32(_2_y)
	builder.PrependInt32(_2_x)
	builder.Prep(4, 8)
	builder.PrependInt32(_1_y)
	builder.PrependInt32(_1_x)
	builder.Prep(4, 8)
	builder.PrependInt32(_0_y)
	builder.PrependInt32(_0_x)
	return builder.Offset()
}
