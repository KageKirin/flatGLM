// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 2x3 matrix of uints
type Matrix2x3_u32 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix2x3_u32) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix2x3_u32) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix2x3_u32) _0(obj *Vector3_u32) *Vector3_u32 {
	if obj == nil {
		obj = new(Vector3_u32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix2x3_u32) _1(obj *Vector3_u32) *Vector3_u32 {
	if obj == nil {
		obj = new(Vector3_u32)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+12)
	return obj
}

func CreateMatrix2x3_u32(builder *flatbuffers.Builder, _0_x uint32, _0_y uint32, _0_z uint32, _1_x uint32, _1_y uint32, _1_z uint32) flatbuffers.UOffsetT {
	builder.Prep(4, 24)
	builder.Prep(4, 12)
	builder.PrependUint32(_1_z)
	builder.PrependUint32(_1_y)
	builder.PrependUint32(_1_x)
	builder.Prep(4, 12)
	builder.PrependUint32(_0_z)
	builder.PrependUint32(_0_y)
	builder.PrependUint32(_0_x)
	return builder.Offset()
}
