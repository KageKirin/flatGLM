// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4D vector of uints (homogenous coordinates)
type Vector4_u32 struct {
	_tab flatbuffers.Struct
}

func (rcv *Vector4_u32) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Vector4_u32) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Vector4_u32) X() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *Vector4_u32) MutateX(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *Vector4_u32) Y() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(4))
}
func (rcv *Vector4_u32) MutateY(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(4), n)
}

func (rcv *Vector4_u32) Z() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *Vector4_u32) MutateZ(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func (rcv *Vector4_u32) W() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(12))
}
func (rcv *Vector4_u32) MutateW(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(12), n)
}

func CreateVector4_u32(builder *flatbuffers.Builder, x uint32, y uint32, z uint32, w uint32) flatbuffers.UOffsetT {
	builder.Prep(4, 16)
	builder.PrependUint32(w)
	builder.PrependUint32(z)
	builder.PrependUint32(y)
	builder.PrependUint32(x)
	return builder.Offset()
}
