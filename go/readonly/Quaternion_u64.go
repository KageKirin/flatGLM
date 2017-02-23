// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4D hypercomplex of ulongs
type Quaternion_u64 struct {
	_tab flatbuffers.Struct
}

func (rcv *Quaternion_u64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Quaternion_u64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Quaternion_u64) X() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *Quaternion_u64) MutateX(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *Quaternion_u64) Y() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *Quaternion_u64) MutateY(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func (rcv *Quaternion_u64) Z() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(16))
}
func (rcv *Quaternion_u64) MutateZ(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(16), n)
}

func (rcv *Quaternion_u64) W() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(24))
}
func (rcv *Quaternion_u64) MutateW(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(24), n)
}

func CreateQuaternion_u64(builder *flatbuffers.Builder, x uint64, y uint64, z uint64, w uint64) flatbuffers.UOffsetT {
	builder.Prep(8, 32)
	builder.PrependUint64(w)
	builder.PrependUint64(z)
	builder.PrependUint64(y)
	builder.PrependUint64(x)
	return builder.Offset()
}
