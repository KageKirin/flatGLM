// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGB color of ulong components
type ColorRGB_u64 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGB_u64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGB_u64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGB_u64) R() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGB_u64) MutateR(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGB_u64) G() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *ColorRGB_u64) MutateG(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func (rcv *ColorRGB_u64) B() uint64 {
	return rcv._tab.GetUint64(rcv._tab.Pos + flatbuffers.UOffsetT(16))
}
func (rcv *ColorRGB_u64) MutateB(n uint64) bool {
	return rcv._tab.MutateUint64(rcv._tab.Pos+flatbuffers.UOffsetT(16), n)
}

func CreateColorRGB_u64(builder *flatbuffers.Builder, r uint64, g uint64, b uint64) flatbuffers.UOffsetT {
	builder.Prep(8, 24)
	builder.PrependUint64(b)
	builder.PrependUint64(g)
	builder.PrependUint64(r)
	return builder.Offset()
}
