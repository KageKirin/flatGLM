// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4x3 matrix of ubytes
type Matrix4x3_u8 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix4x3_u8) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix4x3_u8) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix4x3_u8) _0(obj *Vector3_u8) *Vector3_u8 {
	if obj == nil {
		obj = new(Vector3_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix4x3_u8) _1(obj *Vector3_u8) *Vector3_u8 {
	if obj == nil {
		obj = new(Vector3_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+3)
	return obj
}
func (rcv *Matrix4x3_u8) _2(obj *Vector3_u8) *Vector3_u8 {
	if obj == nil {
		obj = new(Vector3_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+6)
	return obj
}
func (rcv *Matrix4x3_u8) _3(obj *Vector3_u8) *Vector3_u8 {
	if obj == nil {
		obj = new(Vector3_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+9)
	return obj
}

func CreateMatrix4x3_u8(builder *flatbuffers.Builder, _0_x byte, _0_y byte, _0_z byte, _1_x byte, _1_y byte, _1_z byte, _2_x byte, _2_y byte, _2_z byte, _3_x byte, _3_y byte, _3_z byte) flatbuffers.UOffsetT {
	builder.Prep(1, 12)
	builder.Prep(1, 3)
	builder.PrependByte(_3_z)
	builder.PrependByte(_3_y)
	builder.PrependByte(_3_x)
	builder.Prep(1, 3)
	builder.PrependByte(_2_z)
	builder.PrependByte(_2_y)
	builder.PrependByte(_2_x)
	builder.Prep(1, 3)
	builder.PrependByte(_1_z)
	builder.PrependByte(_1_y)
	builder.PrependByte(_1_x)
	builder.Prep(1, 3)
	builder.PrependByte(_0_z)
	builder.PrependByte(_0_y)
	builder.PrependByte(_0_x)
	return builder.Offset()
}