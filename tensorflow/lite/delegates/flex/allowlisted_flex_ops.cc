/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include "tensorflow/lite/delegates/flex/allowlisted_flex_ops.h"

#include <set>

#include "tensorflow/core/framework/op.h"
#include "tensorflow/lite/delegates/flex/allowlisted_flex_ops_internal.h"

namespace tflite {
namespace flex {

const std::set<std::string>& GetFlexAllowlist() {
  static const std::set<std::string>* allowlisted_flex_ops =
      new std::set<std::string>({
          // go/keep-sorted start
          "Abort",
          "Abs",
          "Add",
          "AddN",
          "AddV2",
          "AdjustContrast",
          "AdjustContrastv2",
          "AdjustHue",
          "AdjustSaturation",
          "All",
          "Any",
          "ApplyAdaMax",
          "ApplyAdadelta",
          "ApplyAdagrad",
          "ApplyAdagradDA",
          "ApplyAdagradV2",
          "ApplyAdam",
          "ApplyAddSign",
          "ApplyCenteredRMSProp",
          "ApplyFtrl",
          "ApplyFtrlV2",
          "ApplyGradientDescent",
          "ApplyMomentum",
          "ApplyPowerSign",
          "ApplyProximalAdagrad",
          "ApplyProximalGradientDescent",
          "ApplyRMSProp",
          "ApproximateEqual",
          "ArgMax",
          "ArgMin",
          "Assert",
          "Assign",
          "AssignAdd",
          "AssignSub",
          "Atan",
          "AudioSpectrogram",
          "AvgPool",
          "AvgPool3D",
          "AvgPool3DGrad",
          "AvgPoolGrad",
          "BatchMatMul",
          "BatchMatMulV2",
          "BatchNormWithGlobalNormalization",
          "BatchNormWithGlobalNormalizationGrad",
          "BatchToSpace",
          "BatchToSpaceND",
          "BiasAdd",
          "BiasAddGrad",
          "BiasAddV1",
          "Bincount",
          "BoostedTreesBucketize",
          "BroadcastArgs",
          "BroadcastGradientArgs",
          "BroadcastTo",
          "Bucketize",
          "CTCBeamSearchDecoder",
          "CTCGreedyDecoder",
          "Cast",
          "Ceil",
          "CheckNumerics",
          "CombinedNonMaxSuppression",
          "Complex",
          "ComplexAbs",
          "Concat",
          "ConcatOffset",
          "ConcatV2",
          "Conj",
          "ConjugateTranspose",
          "Const",
          "ControlTrigger",
          "Conv2D",
          "Conv2DBackpropFilter",
          "Conv2DBackpropInput",
          "Conv3D",
          "Conv3DBackpropInputV2",
          "Cos",
          "Cosh",
          "CropAndResize",
          "CropAndResizeGradBoxes",
          "CropAndResizeGradImage",
          "Cumprod",
          "Cumsum",
          "DataFormatDimMap",
          "DataFormatVecPermute",
          "DebugGradientIdentity",
          "DebugGradientRefIdentity",
          "DecodeBase64",
          "DecodeRaw",
          "DecodeWav",
          "DeepCopy",
          "DeleteSessionTensor",
          "DenseBincount",
          "DepthToSpace",
          "DepthwiseConv2dNative",
          "Dequantize",
          "DestroyTemporaryVariable",
          "Diag",
          "Dilation2D",
          "Div",
          "DivNoNan",
          "DynamicPartition",
          "DynamicStitch",
          "Einsum",
          "Elu",
          "EluGrad",
          "Empty",
          "EncodeBase64",
          "EncodeWav",
          "EnsureShape",
          "Enter",
          "Equal",
          "Erf",
          "Exit",
          "Exp",
          "ExpandDims",
          "ExtractImagePatches",
          "FFT",
          "FFT2D",
          "FFT3D",
          "FIFOQueue",
          "FIFOQueueV2",
          "FakeQuantWithMinMaxArgs",
          "FakeQuantWithMinMaxArgsGradient",
          "FakeQuantWithMinMaxVars",
          "FakeQuantWithMinMaxVarsGradient",
          "FakeQuantWithMinMaxVarsPerChannel",
          "FakeQuantWithMinMaxVarsPerChannelGradient",
          "FakeQueue",
          "Fill",
          "Floor",
          "FloorDiv",
          "FloorMod",
          "FusedBatchNorm",
          "FusedBatchNormGrad",
          "FusedBatchNormGradV2",
          "FusedBatchNormGradV3",
          "FusedBatchNormV2",
          "FusedBatchNormV3",
          "FusedPadConv2D",
          "FusedResizeAndPadConv2D",
          "Gather",
          "GatherNd",
          "GatherV2",
          "GetSessionHandle",
          "GetSessionHandleV2",
          "GetSessionTensor",
          "Greater",
          "GreaterEqual",
          "IFFT",
          "IFFT2D",
          "IFFT3D",
          "IRFFT",
          "IRFFT2D",
          "IRFFT3D",
          "Identity",
          "IdentityN",
          "Imag",
          "ImageProjectiveTransformV2",
          "ImmutableConst",
          "InTopK",
          "InTopKV2",
          "InplaceAdd",
          "InplaceSub",
          "InplaceUpdate",
          "Inv",
          "InvGrad",
          "InvertPermutation",
          "IsFinite",
          "IsNan",
          "IsVariableInitialized",
          "LRN",
          "LeakyRelu",
          "LeakyReluGrad",
          "Less",
          "LessEqual",
          "LinSpace",
          "ListDiff",
          "Log",
          "LogSoftmax",
          "LogicalAnd",
          "LogicalNot",
          "LogicalOr",
          "LoopCond",
          "MatMul",
          "MatrixDiag",
          "MatrixDiagV2",
          "MatrixDiagV3",
          "MatrixInverse",
          "MatrixSetDiag",
          "MatrixSetDiagV2",
          "MatrixSetDiagV3",
          "Max",
          "MaxPool",
          "MaxPool3D",
          "MaxPoolGrad",
          "MaxPoolGradGrad",
          "MaxPoolGradGradV2",
          "MaxPoolGradV2",
          "MaxPoolGradWithArgmax",
          "MaxPoolV2",
          "MaxPoolWithArgmax",
          "Maximum",
          "Mean",
          "Merge",
          "MergeV2Checkpoints",
          "Mfcc",
          "Min",
          "Minimum",
          "MirrorPad",
          "MirrorPadGrad",
          "Mul",
          "MulNoNan",
          "Multinomial",
          "Neg",
          "NextIteration",
          "NoOp",
          "NonMaxSuppression",
          "NonMaxSuppressionV2",
          "NonMaxSuppressionV3",
          "NonMaxSuppressionV4",
          "NonMaxSuppressionWithOverlaps",
          "NotEqual",
          "OneHot",
          "OnesLike",
          "Pack",
          "Pad",
          "PadV2",
          "PaddingFIFOQueue",
          "PaddingFIFOQueueV2",
          "ParallelDynamicStitch",
          "ParseExample",
          "ParseExampleV2",
          "ParseSequenceExample",
          "ParseSingleExample",
          "ParseSingleSequenceExample",
          "Placeholder",
          "PlaceholderV2",
          "PlaceholderWithDefault",
          "Pow",
          "PreventGradient",
          "Print",
          "PrintV2",
          "Prod",
          "QuantizeDownAndShrinkRange",
          "QuantizeV2",
          "QuantizedAdd",
          "QuantizedAvgPool",
          "QuantizedBatchNormWithGlobalNormalization",
          "QuantizedBiasAdd",
          "QuantizedConcat",
          "QuantizedConv2D",
          "QuantizedInstanceNorm",
          "QuantizedMatMul",
          "QuantizedMaxPool",
          "QuantizedMul",
          "QuantizedRelu",
          "QuantizedRelu6",
          "QuantizedReshape",
          "QuantizedResizeBilinear",
          "QueueClose",
          "QueueCloseV2",
          "QueueDequeue",
          "QueueDequeueMany",
          "QueueDequeueManyV2",
          "QueueDequeueUpTo",
          "QueueDequeueUpToV2",
          "QueueDequeueV2",
          "QueueEnqueue",
          "QueueEnqueueMany",
          "QueueEnqueueManyV2",
          "QueueEnqueueV2",
          "QueueIsClosed",
          "QueueIsClosedV2",
          "QueueSize",
          "QueueSizeV2",
          "RFFT",
          "RFFT2D",
          "RFFT3D",
          "RaggedBincount",
          "RaggedRange",
          "RaggedTensorToSparse",
          "RaggedTensorToTensor",
          "RandomGamma",
          "RandomStandardNormal",
          "RandomUniform",
          "RandomUniformInt",
          "Range",
          "Rank",
          "Real",
          "RealDiv",
          "Reciprocal",
          "ReciprocalGrad",
          "ReduceJoin",
          "RefEnter",
          "RefExit",
          "RefIdentity",
          "RefMerge",
          "RefNextIteration",
          "RefSelect",
          "RefSwitch",
          "RegexReplace",
          "Relu",
          "Relu6",
          "Relu6Grad",
          "ReluGrad",
          "RemoteCall",
          "RequantizationRange",
          "Requantize",
          "Reshape",
          "ResizeBilinear",
          "ResizeBilinearGrad",
          "ResizeNearestNeighbor",
          "ResizeNearestNeighborGrad",
          "ResourceApplyAdaMax",
          "ResourceApplyAdadelta",
          "ResourceApplyAdagrad",
          "ResourceApplyAdagradDA",
          "ResourceApplyAdagradV2",
          "ResourceApplyAdam",
          "ResourceApplyAddSign",
          "ResourceApplyCenteredRMSProp",
          "ResourceApplyFtrl",
          "ResourceApplyFtrlV2",
          "ResourceApplyGradientDescent",
          "ResourceApplyMomentum",
          "ResourceApplyPowerSign",
          "ResourceApplyProximalAdagrad",
          "ResourceApplyProximalGradientDescent",
          "ResourceApplyRMSProp",
          "ResourceSparseApplyAdadelta",
          "ResourceSparseApplyAdagrad",
          "ResourceSparseApplyAdagradDA",
          "ResourceSparseApplyCenteredRMSProp",
          "ResourceSparseApplyFtrl",
          "ResourceSparseApplyFtrlV2",
          "ResourceSparseApplyMomentum",
          "ResourceSparseApplyProximalAdagrad",
          "ResourceSparseApplyProximalGradientDescent",
          "ResourceSparseApplyRMSProp",
          "ResourceStridedSliceAssign",
          "Restore",
          "RestoreSlice",
          "RestoreV2",
          "Reverse",
          "ReverseSequence",
          "ReverseV2",
          "Round",
          "Rsqrt",
          "RsqrtGrad",
          "SampleDistortedBoundingBoxV2",
          "Save",
          "SaveSlices",
          "SaveV2",
          "ScatterNd",
          "SegmentMax",
          "SegmentMean",
          "SegmentMin",
          "SegmentProd",
          "SegmentSum",
          "Select",
          "SelectV2",
          "Selu",
          "SeluGrad",
          "Shape",
          "ShapeN",
          "ShardedFilename",
          "ShardedFilespec",
          "Sigmoid",
          "SigmoidGrad",
          "Sign",
          "Sin",
          "Sinh",
          "Size",
          "Slice",
          "Softmax",
          "SoftmaxCrossEntropyWithLogits",
          "Softplus",
          "SoftplusGrad",
          "Softsign",
          "SoftsignGrad",
          "SpaceToBatch",
          "SpaceToBatchND",
          "SpaceToDepth",
          "SparseApplyAdadelta",
          "SparseApplyAdagrad",
          "SparseApplyAdagradDA",
          "SparseApplyCenteredRMSProp",
          "SparseApplyFtrl",
          "SparseApplyFtrlV2",
          "SparseApplyMomentum",
          "SparseApplyProximalAdagrad",
          "SparseApplyProximalGradientDescent",
          "SparseApplyRMSProp",
          "SparseBincount",
          "SparseCross",
          "SparseCrossHashed",
          "SparseCrossV2",
          "SparseFillEmptyRows",
          "SparseFillEmptyRowsGrad",
          "SparseReshape",
          "SparseSegmentMean",
          "SparseSegmentMeanGrad",
          "SparseSegmentMeanWithNumSegments",
          "SparseSegmentSqrtN",
          "SparseSegmentSqrtNGrad",
          "SparseSegmentSqrtNWithNumSegments",
          "SparseSegmentSum",
          "SparseSegmentSumWithNumSegments",
          "SparseToDense",
          "Split",
          "SplitV",
          "Sqrt",
          "SqrtGrad",
          "Square",
          "SquaredDifference",
          "Squeeze",
          "Stack",
          "StackClose",
          "StackCloseV2",
          "StackPop",
          "StackPopV2",
          "StackPush",
          "StackPushV2",
          "StackV2",
          "StatelessRandomGammaV2",
          "StatelessRandomNormal",
          "StatelessRandomPoisson",
          "StatelessRandomUniform",
          "StatelessRandomUniformFullInt",
          "StatelessRandomUniformInt",
          "StatelessTruncatedNormal",
          "StaticRegexReplace",
          "StopGradient",
          "StridedSlice",
          "StridedSliceAssign",
          "StridedSliceGrad",
          "StringJoin",
          "StringSplit",
          "StringSplitV2",
          "StringToHashBucket",
          "StringToHashBucketFast",
          "StringToHashBucketStrong",
          "Sub",
          "Substr",
          "Sum",
          "Switch",
          "SymbolicGradient",
          "Tan",
          "Tanh",
          "TanhGrad",
          "TemporaryVariable",
          "TensorArray",
          "TensorArrayClose",
          "TensorArrayCloseV2",
          "TensorArrayCloseV3",
          "TensorArrayConcat",
          "TensorArrayConcatV2",
          "TensorArrayConcatV3",
          "TensorArrayGather",
          "TensorArrayGatherV2",
          "TensorArrayGatherV3",
          "TensorArrayGrad",
          "TensorArrayGradV2",
          "TensorArrayGradV3",
          "TensorArrayGradWithShape",
          "TensorArrayPack",
          "TensorArrayRead",
          "TensorArrayReadV2",
          "TensorArrayReadV3",
          "TensorArrayScatter",
          "TensorArrayScatterV2",
          "TensorArrayScatterV3",
          "TensorArraySize",
          "TensorArraySizeV2",
          "TensorArraySizeV3",
          "TensorArraySplit",
          "TensorArraySplitV2",
          "TensorArraySplitV3",
          "TensorArrayUnpack",
          "TensorArrayV2",
          "TensorArrayV3",
          "TensorArrayWrite",
          "TensorArrayWriteV2",
          "TensorArrayWriteV3",
          "Tile",
          "TileGrad",
          "Timestamp",
          "TopK",
          "TopKV2",
          "Transpose",
          "TruncateDiv",
          "TruncatedNormal",
          "UnicodeDecode",
          "UnicodeDecodeWithOffsets",
          "UnicodeEncode",
          "UnicodeTranscode",
          "Unique",
          "UniqueV2",
          "UniqueWithCounts",
          "UniqueWithCountsV2",
          "Unpack",
          "UnsortedSegmentMax",
          "UnsortedSegmentMin",
          "UnsortedSegmentProd",
          "UnsortedSegmentSum",
          "Variable",
          "VariableV2",
          "Where",
          "Xdivy",
          "Xlogy",
          "ZerosLike",
          "_Arg",
          "_ArrayToList",
          "_HostCast",
          "_HostRecv",
          "_HostSend",
          "_ListToArray",
          "_Recv",
          "_Retval",
          "_Send",
          // go/keep-sorted end
      });
  return *allowlisted_flex_ops;
  // Prevent lint error about this function being too long. This function
  // is a set of ops, and making it shorter won't help readbility.
  // NOLINTNEXTLINE
}

// Allow the tf.text ops if they are registered in the global op registry.
bool IsAllowedTFTextOpForFlex(const std::string& op_name) {
  static const std::set<std::string>* tftext_flex_ops =
      new std::set<std::string>({
          "CaseFoldUTF8",
          "ConstrainedSequence",
          "MaxSpanningTree",
          "NormalizeUTF8",
          "NormalizeUTF8WithOffsetsMap",
          "RegexSplitWithOffsets",
          "RougeL",
          "SentenceFragments",
          "SentencepieceOp",
          "SentencepieceTokenizeOp",
          "SentencepieceTokenizeWithOffsetsOp",
          "SentencepieceDetokenizeOp",
          "SentencepieceVocabSizeOp",
          "SplitMergeTokenizeWithOffsets",
          "UnicodeScriptTokenizeWithOffsets",
          "WhitespaceTokenizeWithOffsets",
          "WordpieceTokenizeWithOffsets",
      });
  if (tftext_flex_ops->count(op_name) == 0) return false;
  return tensorflow::OpRegistry::Global()->LookUp(op_name) != nullptr;
}

// Allow the sentencepiece ops if they are registered in the global op registry.
bool IsAllowedSentencePieceOpForFlex(const std::string& op_name) {
  static const std::set<std::string>* sentencepiece_flex_ops =
      new std::set<std::string>({
          "SentencepieceGetPieceSize",
          "SentencepiecePieceToId",
          "SentencepieceIdToPiece",
          "SentencepieceEncodeDense",
          "SentencepieceEncodeSparse",
          "SentencepieceDecode",
      });
  if (sentencepiece_flex_ops->count(op_name) == 0) return false;
  return tensorflow::OpRegistry::Global()->LookUp(op_name) != nullptr;
}

bool IsAllowlistedFlexOp(const std::string& tensorflow_op_name) {
  if (GetFlexAllowlist().count(tensorflow_op_name) != 0) return true;

  // Check if the op is an allowlisted tf.text or sentencepiece op.
  return IsAllowedTFTextOpForFlex(tensorflow_op_name) ||
         IsAllowedSentencePieceOpForFlex(tensorflow_op_name);
}

}  // namespace flex
}  // namespace tflite
