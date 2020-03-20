#ifndef NCNN_INCLUDE_GUARD_squeezenet_v1_1_id_h
#define NCNN_INCLUDE_GUARD_squeezenet_v1_1_id_h
namespace squeezenet_v1_1_param_id {
const int LAYER_data = 0;
const int BLOB_data = 0;
const int LAYER_conv1 = 1;
const int BLOB_conv1_relu_conv1 = 1;
const int LAYER_pool1 = 2;
const int BLOB_pool1 = 2;
const int LAYER_fire2_squeeze1x1 = 3;
const int BLOB_fire2_squeeze1x1_fire2_relu_squeeze1x1 = 3;
const int LAYER_splitncnn_0 = 4;
const int BLOB_fire2_squeeze1x1_fire2_relu_squeeze1x1_splitncnn_0 = 4;
const int BLOB_fire2_squeeze1x1_fire2_relu_squeeze1x1_splitncnn_1 = 5;
const int LAYER_fire2_expand1x1 = 5;
const int BLOB_fire2_expand1x1_fire2_relu_expand1x1 = 6;
const int LAYER_fire2_expand3x3 = 6;
const int BLOB_fire2_expand3x3_fire2_relu_expand3x3 = 7;
const int LAYER_fire2_concat = 7;
const int BLOB_fire2_concat = 8;
const int LAYER_fire3_squeeze1x1 = 8;
const int BLOB_fire3_squeeze1x1_fire3_relu_squeeze1x1 = 9;
const int LAYER_splitncnn_1 = 9;
const int BLOB_fire3_squeeze1x1_fire3_relu_squeeze1x1_splitncnn_0 = 10;
const int BLOB_fire3_squeeze1x1_fire3_relu_squeeze1x1_splitncnn_1 = 11;
const int LAYER_fire3_expand1x1 = 10;
const int BLOB_fire3_expand1x1_fire3_relu_expand1x1 = 12;
const int LAYER_fire3_expand3x3 = 11;
const int BLOB_fire3_expand3x3_fire3_relu_expand3x3 = 13;
const int LAYER_fire3_concat = 12;
const int BLOB_fire3_concat = 14;
const int LAYER_pool3 = 13;
const int BLOB_pool3 = 15;
const int LAYER_fire4_squeeze1x1 = 14;
const int BLOB_fire4_squeeze1x1_fire4_relu_squeeze1x1 = 16;
const int LAYER_splitncnn_2 = 15;
const int BLOB_fire4_squeeze1x1_fire4_relu_squeeze1x1_splitncnn_0 = 17;
const int BLOB_fire4_squeeze1x1_fire4_relu_squeeze1x1_splitncnn_1 = 18;
const int LAYER_fire4_expand1x1 = 16;
const int BLOB_fire4_expand1x1_fire4_relu_expand1x1 = 19;
const int LAYER_fire4_expand3x3 = 17;
const int BLOB_fire4_expand3x3_fire4_relu_expand3x3 = 20;
const int LAYER_fire4_concat = 18;
const int BLOB_fire4_concat = 21;
const int LAYER_fire5_squeeze1x1 = 19;
const int BLOB_fire5_squeeze1x1_fire5_relu_squeeze1x1 = 22;
const int LAYER_splitncnn_3 = 20;
const int BLOB_fire5_squeeze1x1_fire5_relu_squeeze1x1_splitncnn_0 = 23;
const int BLOB_fire5_squeeze1x1_fire5_relu_squeeze1x1_splitncnn_1 = 24;
const int LAYER_fire5_expand1x1 = 21;
const int BLOB_fire5_expand1x1_fire5_relu_expand1x1 = 25;
const int LAYER_fire5_expand3x3 = 22;
const int BLOB_fire5_expand3x3_fire5_relu_expand3x3 = 26;
const int LAYER_fire5_concat = 23;
const int BLOB_fire5_concat = 27;
const int LAYER_pool5 = 24;
const int BLOB_pool5 = 28;
const int LAYER_fire6_squeeze1x1 = 25;
const int BLOB_fire6_squeeze1x1_fire6_relu_squeeze1x1 = 29;
const int LAYER_splitncnn_4 = 26;
const int BLOB_fire6_squeeze1x1_fire6_relu_squeeze1x1_splitncnn_0 = 30;
const int BLOB_fire6_squeeze1x1_fire6_relu_squeeze1x1_splitncnn_1 = 31;
const int LAYER_fire6_expand1x1 = 27;
const int BLOB_fire6_expand1x1_fire6_relu_expand1x1 = 32;
const int LAYER_fire6_expand3x3 = 28;
const int BLOB_fire6_expand3x3_fire6_relu_expand3x3 = 33;
const int LAYER_fire6_concat = 29;
const int BLOB_fire6_concat = 34;
const int LAYER_fire7_squeeze1x1 = 30;
const int BLOB_fire7_squeeze1x1_fire7_relu_squeeze1x1 = 35;
const int LAYER_splitncnn_5 = 31;
const int BLOB_fire7_squeeze1x1_fire7_relu_squeeze1x1_splitncnn_0 = 36;
const int BLOB_fire7_squeeze1x1_fire7_relu_squeeze1x1_splitncnn_1 = 37;
const int LAYER_fire7_expand1x1 = 32;
const int BLOB_fire7_expand1x1_fire7_relu_expand1x1 = 38;
const int LAYER_fire7_expand3x3 = 33;
const int BLOB_fire7_expand3x3_fire7_relu_expand3x3 = 39;
const int LAYER_fire7_concat = 34;
const int BLOB_fire7_concat = 40;
const int LAYER_fire8_squeeze1x1 = 35;
const int BLOB_fire8_squeeze1x1_fire8_relu_squeeze1x1 = 41;
const int LAYER_splitncnn_6 = 36;
const int BLOB_fire8_squeeze1x1_fire8_relu_squeeze1x1_splitncnn_0 = 42;
const int BLOB_fire8_squeeze1x1_fire8_relu_squeeze1x1_splitncnn_1 = 43;
const int LAYER_fire8_expand1x1 = 37;
const int BLOB_fire8_expand1x1_fire8_relu_expand1x1 = 44;
const int LAYER_fire8_expand3x3 = 38;
const int BLOB_fire8_expand3x3_fire8_relu_expand3x3 = 45;
const int LAYER_fire8_concat = 39;
const int BLOB_fire8_concat = 46;
const int LAYER_fire9_squeeze1x1 = 40;
const int BLOB_fire9_squeeze1x1_fire9_relu_squeeze1x1 = 47;
const int LAYER_splitncnn_7 = 41;
const int BLOB_fire9_squeeze1x1_fire9_relu_squeeze1x1_splitncnn_0 = 48;
const int BLOB_fire9_squeeze1x1_fire9_relu_squeeze1x1_splitncnn_1 = 49;
const int LAYER_fire9_expand1x1 = 42;
const int BLOB_fire9_expand1x1_fire9_relu_expand1x1 = 50;
const int LAYER_fire9_expand3x3 = 43;
const int BLOB_fire9_expand3x3_fire9_relu_expand3x3 = 51;
const int LAYER_fire9_concat = 44;
const int BLOB_fire9_concat_drop9 = 52;
const int LAYER_conv10 = 45;
const int BLOB_conv10_relu_conv10 = 53;
const int LAYER_pool10 = 46;
const int BLOB_pool10 = 54;
const int LAYER_prob = 47;
const int BLOB_prob = 55;
} // namespace squeezenet_v1_1_param_id
#endif // NCNN_INCLUDE_GUARD_squeezenet_v1_1_id_h
