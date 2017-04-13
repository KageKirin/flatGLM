// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGB color of float components
type ColorRGB_f32 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGB_f32) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGB_f32) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGB_f32) R() float32 {
	return rcv._tab.GetFloat32(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGB_f32) MutateR(n float32) bool {
	return rcv._tab.MutateFloat32(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGB_f32) G() float32 {
	return rcv._tab.GetFloat32(rcv._tab.Pos + flatbuffers.UOffsetT(4))
}
func (rcv *ColorRGB_f32) MutateG(n float32) bool {
	return rcv._tab.MutateFloat32(rcv._tab.Pos+flatbuffers.UOffsetT(4), n)
}

func (rcv *ColorRGB_f32) B() float32 {
	return rcv._tab.GetFloat32(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *ColorRGB_f32) MutateB(n float32) bool {
	return rcv._tab.MutateFloat32(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func CreateColorRGB_f32(builder *flatbuffers.Builder, r float32, g float32, b float32) flatbuffers.UOffsetT {
	builder.Prep(4, 12)
	builder.PrependFloat32(b)
	builder.PrependFloat32(g)
	builder.PrependFloat32(r)
	return builder.Offset()
}