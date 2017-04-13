// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGBA color of ushort components
type ColorRGBA_u16 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGBA_u16) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGBA_u16) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGBA_u16) R() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGBA_u16) MutateR(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGBA_u16) G() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(2))
}
func (rcv *ColorRGBA_u16) MutateG(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(2), n)
}

func (rcv *ColorRGBA_u16) B() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(4))
}
func (rcv *ColorRGBA_u16) MutateB(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(4), n)
}

func (rcv *ColorRGBA_u16) A() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(6))
}
func (rcv *ColorRGBA_u16) MutateA(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(6), n)
}

func CreateColorRGBA_u16(builder *flatbuffers.Builder, r uint16, g uint16, b uint16, a uint16) flatbuffers.UOffsetT {
	builder.Prep(2, 8)
	builder.PrependUint16(a)
	builder.PrependUint16(b)
	builder.PrependUint16(g)
	builder.PrependUint16(r)
	return builder.Offset()
}