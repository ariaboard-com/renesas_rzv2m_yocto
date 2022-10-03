/*-----------------------------------------------------------------------------------------------*/
/**
    @file	b_image_api.h
    @brief	B2SDK Public header file for shooting
    Copyright (C) 2021 CASIO COMPUTER CO., LTD.  All rights reserved.
    Copyright (C) 2021 Renesas Electronics Corporation. All rights reserved.
*/
/*-----------------------------------------------------------------------------------------------*/
#ifndef B_IMAGE_API_H
#define B_IMAGE_API_H

#ifdef __cplusplus
extern "C"
{
#endif


#define B2_ERR_IMAGE_INPUT_BUSY (-301)

#define D_IMAGE_EXPOTIME_AUTO   	0
#define D_IMAGE_EXPOTIME_1_64000	1
#define D_IMAGE_EXPOTIME_1_50000	2
#define D_IMAGE_EXPOTIME_1_40000	3
#define D_IMAGE_EXPOTIME_1_32000	4
#define D_IMAGE_EXPOTIME_1_25000	5
#define D_IMAGE_EXPOTIME_1_20000	6
#define D_IMAGE_EXPOTIME_1_16000	7
#define D_IMAGE_EXPOTIME_1_12000	8
#define D_IMAGE_EXPOTIME_1_10000	9
#define D_IMAGE_EXPOTIME_1_8000 	10
#define D_IMAGE_EXPOTIME_1_6400 	11
#define D_IMAGE_EXPOTIME_1_5000 	12
#define D_IMAGE_EXPOTIME_1_4000 	13
#define D_IMAGE_EXPOTIME_1_3200 	14
#define D_IMAGE_EXPOTIME_1_2500 	15
#define D_IMAGE_EXPOTIME_1_2000 	16
#define D_IMAGE_EXPOTIME_1_1600 	17
#define D_IMAGE_EXPOTIME_1_1250 	18
#define D_IMAGE_EXPOTIME_1_1000 	19
#define D_IMAGE_EXPOTIME_1_800  	20
#define D_IMAGE_EXPOTIME_1_640  	21
#define D_IMAGE_EXPOTIME_1_500  	22
#define D_IMAGE_EXPOTIME_1_400  	23
#define D_IMAGE_EXPOTIME_1_320  	24
#define D_IMAGE_EXPOTIME_1_250  	25
#define D_IMAGE_EXPOTIME_1_200  	26
#define D_IMAGE_EXPOTIME_1_160  	27
#define D_IMAGE_EXPOTIME_1_120  	28
#define D_IMAGE_EXPOTIME_1_100  	29
#define D_IMAGE_EXPOTIME_1_80   	30
#define D_IMAGE_EXPOTIME_1_60   	31
#define D_IMAGE_EXPOTIME_1_50   	32
#define D_IMAGE_EXPOTIME_1_40   	33
#define D_IMAGE_EXPOTIME_1_33   	34
#define D_IMAGE_EXPOTIME_1_30   	35
#define D_IMAGE_EXPOTIME_1_25   	36
#define D_IMAGE_EXPOTIME_1_20   	37
#define D_IMAGE_EXPOTIME_1_15   	38
#define D_IMAGE_EXPOTIME_1_13   	39
#define D_IMAGE_EXPOTIME_1_10   	40
#define D_IMAGE_EXPOTIME_1_8    	41
#define D_IMAGE_EXPOTIME_1_6    	42
#define D_IMAGE_EXPOTIME_1_5    	43
#define D_IMAGE_EXPOTIME_1_4    	44
#define D_IMAGE_EXPOTIME_3_10   	45
#define D_IMAGE_EXPOTIME_4_10   	46
#define D_IMAGE_EXPOTIME_5_10   	47
#define D_IMAGE_EXPOTIME_6_10   	48
#define D_IMAGE_EXPOTIME_8_10   	49
#define D_IMAGE_EXPOTIME_1_1    	50
#define D_IMAGE_EXPOTIME_13_10  	51
#define D_IMAGE_EXPOTIME_16_10  	52
#define D_IMAGE_EXPOTIME_2_1    	53
#define D_IMAGE_EXPOTIME_25_10  	54
#define D_IMAGE_EXPOTIME_32_10  	55
#define D_IMAGE_EXPOTIME_4_1    	56
#define D_IMAGE_EXPOTIME_5_1    	57
#define D_IMAGE_EXPOTIME_6_1    	58
#define D_IMAGE_EXPOTIME_8_1    	59
#define D_IMAGE_EXPOTIME_10_1   	60
#define D_IMAGE_EXPOTIME_13_1   	61
#define D_IMAGE_EXPOTIME_15_1   	62
#define D_IMAGE_EXPOTIME_20_1   	63
#define D_IMAGE_EXPOTIME_25_1   	64
#define D_IMAGE_EXPOTIME_30_1   	65
#define D_IMAGE_EXPOTIME_40_1   	66
#define D_IMAGE_EXPOTIME_50_1   	67
#define D_IMAGE_EXPOTIME_60_1   	68
#define D_IMAGE_EXPOTIME_80_1   	69
#define D_IMAGE_EXPOTIME_100_1  	70
#define D_IMAGE_EXPOTIME_125_1  	71
#define D_IMAGE_EXPOTIME_160_1  	72
#define D_IMAGE_EXPOTIME_200_1  	73
#define D_IMAGE_EXPOTIME_250_1  	74
#define D_IMAGE_EXPOTIME_320_1  	75
#define D_IMAGE_EXPOTIME_400_1  	76
#define D_IMAGE_EXPOTIME_500_1  	77

#define D_IMAGE_GAIN_AUTO 0
#define D_IMAGE_GAIN_0dB  1
#define D_IMAGE_GAIN_1dB  2
#define D_IMAGE_GAIN_2dB  3
#define D_IMAGE_GAIN_3dB  4
#define D_IMAGE_GAIN_4dB  5
#define D_IMAGE_GAIN_5dB  6
#define D_IMAGE_GAIN_6dB  7
#define D_IMAGE_GAIN_7dB  8
#define D_IMAGE_GAIN_8dB  9
#define D_IMAGE_GAIN_9dB  10
#define D_IMAGE_GAIN_10dB 11
#define D_IMAGE_GAIN_11dB 12
#define D_IMAGE_GAIN_12dB 13
#define D_IMAGE_GAIN_13dB 14
#define D_IMAGE_GAIN_14dB 15
#define D_IMAGE_GAIN_15dB 16
#define D_IMAGE_GAIN_16dB 17
#define D_IMAGE_GAIN_17dB 18
#define D_IMAGE_GAIN_18dB 19
#define D_IMAGE_GAIN_19dB 20
#define D_IMAGE_GAIN_20dB 21
#define D_IMAGE_GAIN_21dB 22
#define D_IMAGE_GAIN_22dB 23
#define D_IMAGE_GAIN_23dB 24
#define D_IMAGE_GAIN_24dB 25
#define D_IMAGE_GAIN_25dB 26
#define D_IMAGE_GAIN_26dB 27
#define D_IMAGE_GAIN_27dB 28
#define D_IMAGE_GAIN_28dB 29
#define D_IMAGE_GAIN_29dB 30
#define D_IMAGE_GAIN_30dB 31
#define D_IMAGE_GAIN_31dB 32
#define D_IMAGE_GAIN_32dB 33
#define D_IMAGE_GAIN_33dB 34
#define D_IMAGE_GAIN_34dB 35
#define D_IMAGE_GAIN_35dB 36
#define D_IMAGE_GAIN_36dB 37
#define D_IMAGE_GAIN_37dB 38
#define D_IMAGE_GAIN_38dB 39
#define D_IMAGE_GAIN_39dB 40
#define D_IMAGE_GAIN_40dB 41
#define D_IMAGE_GAIN_41dB 42
#define D_IMAGE_GAIN_42dB 43
#define D_IMAGE_GAIN_43dB 44
#define D_IMAGE_GAIN_44dB 45
#define D_IMAGE_GAIN_45dB 46
#define D_IMAGE_GAIN_46dB 47
#define D_IMAGE_GAIN_47dB 48
#define D_IMAGE_GAIN_48dB 49
#define D_IMAGE_GAIN_49dB 50
#define D_IMAGE_GAIN_50dB 51
#define D_IMAGE_GAIN_51dB 52
#define D_IMAGE_GAIN_52dB 53
#define D_IMAGE_GAIN_53dB 54
#define D_IMAGE_GAIN_54dB 55
#define D_IMAGE_GAIN_55dB 56
#define D_IMAGE_GAIN_56dB 57
#define D_IMAGE_GAIN_57dB 58
#define D_IMAGE_GAIN_58dB 59
#define D_IMAGE_GAIN_59dB 60
#define D_IMAGE_GAIN_60dB 61
#define D_IMAGE_GAIN_61dB 62
#define D_IMAGE_GAIN_62dB 63
#define D_IMAGE_GAIN_63dB 64
#define D_IMAGE_GAIN_64dB 65

#define D_IMAGE_EXPOCRCT_N   0
#define D_IMAGE_EXPOCRCT_M1  1
#define D_IMAGE_EXPOCRCT_P1  2
#define D_IMAGE_EXPOCRCT_M2  3
#define D_IMAGE_EXPOCRCT_P2  4
#define D_IMAGE_EXPOCRCT_M3  5
#define D_IMAGE_EXPOCRCT_P3  6
#define D_IMAGE_EXPOCRCT_M4  7
#define D_IMAGE_EXPOCRCT_P4  8
#define D_IMAGE_EXPOCRCT_M5  9
#define D_IMAGE_EXPOCRCT_P5  10
#define D_IMAGE_EXPOCRCT_M6  11
#define D_IMAGE_EXPOCRCT_P6  12
#define D_IMAGE_EXPOCRCT_M7  13
#define D_IMAGE_EXPOCRCT_P7  14
#define D_IMAGE_EXPOCRCT_M8  15
#define D_IMAGE_EXPOCRCT_P8  16
#define D_IMAGE_EXPOCRCT_M9  17
#define D_IMAGE_EXPOCRCT_P9  18
#define D_IMAGE_EXPOCRCT_M10 19
#define D_IMAGE_EXPOCRCT_P10 20

#define D_IMAGE_TM_LEVEL_0  0
#define D_IMAGE_TM_LEVEL_1  1
#define D_IMAGE_TM_LEVEL_2  2
#define D_IMAGE_TM_LEVEL_3  3
#define D_IMAGE_TM_LEVEL_4  4
#define D_IMAGE_TM_LEVEL_5  5
#define D_IMAGE_TM_LEVEL_6  6
#define D_IMAGE_TM_LEVEL_7  7
#define D_IMAGE_TM_LEVEL_8  8
#define D_IMAGE_TM_LEVEL_9  9
#define D_IMAGE_TM_LEVEL_10 10

#define D_IMAGE_SHARPNESS_LEVEL_0  0
#define D_IMAGE_SHARPNESS_LEVEL_1  1
#define D_IMAGE_SHARPNESS_LEVEL_2  2
#define D_IMAGE_SHARPNESS_LEVEL_3  3
#define D_IMAGE_SHARPNESS_LEVEL_4  4
#define D_IMAGE_SHARPNESS_LEVEL_5  5
#define D_IMAGE_SHARPNESS_LEVEL_6  6
#define D_IMAGE_SHARPNESS_LEVEL_7  7
#define D_IMAGE_SHARPNESS_LEVEL_8  8
#define D_IMAGE_SHARPNESS_LEVEL_9  9
#define D_IMAGE_SHARPNESS_LEVEL_10 10

#define D_IMAGE_CONTRAST_LOW_5     0
#define D_IMAGE_CONTRAST_LOW_4     1
#define D_IMAGE_CONTRAST_LOW_3     2
#define D_IMAGE_CONTRAST_LOW_2     3
#define D_IMAGE_CONTRAST_LOW_1     4
#define D_IMAGE_CONTRAST_NORMAL    5
#define D_IMAGE_CONTRAST_HIGH_1    6
#define D_IMAGE_CONTRAST_HIGH_2    7
#define D_IMAGE_CONTRAST_HIGH_3    8
#define D_IMAGE_CONTRAST_HIGH_4    9
#define D_IMAGE_CONTRAST_HIGH_5    10

#define D_IMAGE_SATURATION_LOW_5   0
#define D_IMAGE_SATURATION_LOW_4   1
#define D_IMAGE_SATURATION_LOW_3   2
#define D_IMAGE_SATURATION_LOW_2   3
#define D_IMAGE_SATURATION_LOW_1   4
#define D_IMAGE_SATURATION_NORMAL  5
#define D_IMAGE_SATURATION_HIGH_1  6
#define D_IMAGE_SATURATION_HIGH_2  7
#define D_IMAGE_SATURATION_HIGH_3  8
#define D_IMAGE_SATURATION_HIGH_4  9
#define D_IMAGE_SATURATION_HIGH_5  10

#define D_IMAGE_2DYNR_LEVEL_0      0
#define D_IMAGE_2DYNR_LEVEL_1      1
#define D_IMAGE_2DYNR_LEVEL_2      2
#define D_IMAGE_2DYNR_LEVEL_3      3
#define D_IMAGE_2DYNR_LEVEL_4      4
#define D_IMAGE_2DYNR_LEVEL_5      5
#define D_IMAGE_2DYNR_LEVEL_6      6
#define D_IMAGE_2DYNR_LEVEL_7      7
#define D_IMAGE_2DYNR_LEVEL_8      8
#define D_IMAGE_2DYNR_LEVEL_9      9
#define D_IMAGE_2DYNR_LEVEL_10     10

#define D_IMAGE_2DCNR_LEVEL_0      0
#define D_IMAGE_2DCNR_LEVEL_1      1
#define D_IMAGE_2DCNR_LEVEL_2      2
#define D_IMAGE_2DCNR_LEVEL_3      3
#define D_IMAGE_2DCNR_LEVEL_4      4
#define D_IMAGE_2DCNR_LEVEL_5      5
#define D_IMAGE_2DCNR_LEVEL_6      6
#define D_IMAGE_2DCNR_LEVEL_7      7
#define D_IMAGE_2DCNR_LEVEL_8      8
#define D_IMAGE_2DCNR_LEVEL_9      9
#define D_IMAGE_2DCNR_LEVEL_10     10

#define D_IMAGE_WB_MODE_AWB        0
#define D_IMAGE_WB_MODE_MWB        1

#define D_IMAGE_PTS_DIM            (2)
#define D_IMAGE_MAX_VECTOR_NUM     (4096)
#define D_IMAGE_WIN_SIZE           (2)

#define D_IMAGE_OUTPUT_HDMI        (0)

#define D_IMAGE_OUTPUT_AUTO        (0)
#define D_IMAGE_OUTPUT_1280x720    (1)
#define D_IMAGE_OUTPUT_1920x1080   (2)
#define D_IMAGE_OUTPUT_3840x2160   (3)

#define D_IMAGE_JPEG_TARGET_QUALITY (0)
#define D_IMAGE_JPEG_TARGET_SIZE    (1)

#define D_IMAGE_ROTATE_0            (0)
#define D_IMAGE_ROTATE_90           (1)
#define D_IMAGE_ROTATE_180          (2)
#define D_IMAGE_ROTATE_270          (3)

#define D_CVT_COLOR_YUV2RGB         (0)     ///< YUV → RGB
#define D_CVT_COLOR_RGB2YUV         (1)     ///< RGB → YUV
#define D_CVT_COLOR_RGBA2YUV        (2)     ///< RGBA → YUV
#define D_CVT_COLOR_YUV2BGR         (3)     ///< YUV → BGR
#define D_CVT_COLOR_BGR2YUV         (4)     ///< BGR → YUV
#define D_CVT_COLOR_BGRA2YUV        (5)     ///< BGRA → YUV
#define D_CVT_COLOR_YUV2HSV         (6)     ///< YUV → HSV(H：0-360)
#define D_CVT_COLOR_HSV2YUV         (7)     ///< HSV(H：0-360) → YUV
#define D_CVT_COLOR_RGB2HSV         (8)     ///< RGB → HSV(H：0-360)
#define D_CVT_COLOR_HSV2RGB         (9)     ///< HSV(H：0-360) → RGB
#define D_CVT_COLOR_BGR2HSV         (10)    ///< BGR → HSV(H：0-360)
#define D_CVT_COLOR_HSV2BGR         (11)    ///< HSV(H：0-360) → BGR
#define D_CVT_COLOR_YUV2Y           (12)    ///< YUV → Y
#define D_CVT_COLOR_YUV2YUV         (13)    ///< YUV → YUV(COPY)
#define D_CVT_COLOR_Y2Y             (14)    ///< Y → Y(COPY)
#define D_CVT_COLOR_Y2YUV           (15)    ///< Y → YUV
#define D_CVT_COLOR_RGB2BGR         (16)    ///< RGB → BGR
#define D_CVT_COLOR_BGR2RGB         (17)    ///< BGR → RGB
#define D_CVT_COLOR_RGBA2BGRA       (18)    ///< RGBA → BGRA
#define D_CVT_COLOR_BGRA2RGBA       (19)    ///< BGRA → RGBA

#define D_DETECT_MAX_NUM            (22)

#define D_DETECT_FACE_MAX_NUM       (11)

#define D_DETECT_HUMAN_MAX_NUM      (11)

#define D_IMAGE_HIST_DATA_NUM_8BIT  (360)

#define D_IMAGE_LUT_DATA_NUM_8BIT   (256)

#define D_IMAGE_3DNR_OFF            (0)
#define D_IMAGE_3DNR_ON             (1)

#define D_IMAGE_FLC_TYPE_LESS       (0)
#define D_IMAGE_FLC_TYPE_50HZ       (1)
#define D_IMAGE_FLC_TYPE_60HZ       (2)

#define D_IMAGE_GAMMA_DEFAULT       (0)
#define D_IMAGE_GAMMA_LIGHTER       (1)
#define D_IMAGE_GAMMA_DARKER        (2)
#define D_IMAGE_GAMMA_HIGH_CONTRAST (3)
#define D_IMAGE_GAMMA_LOW_CONTRAST  (4)

#define D_IMAGE_DETECT_PRIORITY_SPEED    (0)
#define D_IMAGE_DETECT_PRIORITY_ACCURACY (1)

#define D_IMAGE_FOCUS_ANALYSIS_AREA_NUM (18)

#define D_IMAGE_FILTER_COEF_NUM_3x3    (9)
#define D_IMAGE_FILTER_COEF_NUM_5x5    (25)

#define D_IMAGE_CV_MAX_CH           (4)

#define D_IMAGE_FACE_POSE_NON            (0)
#define D_IMAGE_FACE_POSE_FRONT          (1)
#define D_IMAGE_FACE_POSE_RIGHT_DIAGONAL (2)
#define D_IMAGE_FACE_POSE_RIGHT          (3)
#define D_IMAGE_FACE_POSE_LEFT_DIAGONAL  (4)
#define D_IMAGE_FACE_POSE_LEFT           (5)


    typedef enum
    {
        D_IMAGE_FORMAT_BYR      = (1),
        D_IMAGE_FORMAT_RGB      = (2),
        D_IMAGE_FORMAT_RGBA     = (3),
        D_IMAGE_FORMAT_BGR      = (4),
        D_IMAGE_FORMAT_BGRA     = (5),
        D_IMAGE_FORMAT_YUYV     = (6),
        D_IMAGE_FORMAT_HSV      = (7),
        D_IMAGE_FORMAT_HSV_FULL = (8),
        D_IMAGE_FORMAT_GRAY     = (9),
        D_IMAGE_FORMAT_JPEG     = (10),
        D_IMAGE_FORMAT_QUARTER_YUYV = (11)
    } e_image_format_t;

    typedef enum
    {
        D_IMAGE_SIZE_4K_30P,
        D_IMAGE_SIZE_FHD_30P,
        D_IMAGE_SIZE_FHD_60P,
        D_IMAGE_SIZE_QHD_30P,
        D_IMAGE_SIZE_FHD_30P_X2
    } e_video_config_t;

    typedef struct
    {
        e_video_config_t cfg;
        uint32_t n_buffer;
    } st_video_frame_info_t;

    typedef struct
    {
        uint32_t width;
        uint32_t height;
        uint32_t format;
    } st_image_info_t;

    typedef struct
    {
        uint64_t handle;
        st_image_info_t image_info;
    } st_image_object_t;

    typedef struct
    {
        uint8_t output;
        uint8_t resolution;
    } st_display_info_t;

    typedef struct
    {
        uint32_t clip_pos_x;
        uint32_t clip_pos_y;
        uint32_t clip_width;
        uint32_t clip_height;
    } st_rect_info_t;

    typedef struct
    {
        st_image_info_t image_info;
        int8_t file_name[256];
    } st_image_output_info_t;

    typedef enum
    {
        D_IMAGE_KSIZE_3x3,
        D_IMAGE_KSIZE_5x5
    } e_image_ksize_t;

    typedef struct
    {
        int8_t *p_kernel;
        uint16_t div;
        e_image_ksize_t ksize;
    } st_image_filter_2d_param_t;

    typedef enum
    {
        D_IMAGE_BLOCK_SIZE_4x4,
        D_IMAGE_BLOCK_SIZE_8x8,
        D_IMAGE_BLOCK_SIZE_16x16
    } e_image_block_size_t;

    typedef struct
    {
        float prev_pts[D_IMAGE_MAX_VECTOR_NUM]
                      [D_IMAGE_PTS_DIM];
        float dest[D_IMAGE_MAX_VECTOR_NUM][D_IMAGE_PTS_DIM];
    } st_image_pts_t;

    typedef struct
    {
        st_image_pts_t pts;
        uint16_t num;
    } st_image_opticalflow_obj_t;

    typedef enum
    {
        D_IMAGE_CALC_OPTICAL_FLOW_PYR_DEST_MODE_COORDINATE,
        D_IMAGE_CALC_OPTICAL_FLOW_PYR_DEST_MODE_SUB
    } e_image_calc_optical_flow_pyr_dest_mode_t;

    typedef struct
    {
        bool_t use_lpf;
        e_image_block_size_t block_size;
        uint8_t
            win_size[D_IMAGE_WIN_SIZE];
        uint8_t max_level;
        e_image_calc_optical_flow_pyr_dest_mode_t dest_mode;
    } st_image_calc_optical_flow_pyr_param_t;

    typedef struct
    {
        st_image_info_t image_info;
        uint32_t hbyte;
        int32_t tgt_x;
        int32_t tgt_y;
        uint32_t tgt_w;
        uint32_t tgt_h;
    } st_image_ex_info_t;

    typedef struct
    {
        uint8_t gain;
        uint8_t expo_time;
    } st_exp_info_t;

    typedef struct
    {
        int16_t coef[9];
    } st_color_matrix;

    typedef struct
    {
        uint16_t pos_x;
        uint16_t pos_y;
        uint16_t width;
        uint16_t height;
    } st_image_focus_area_t;

    typedef struct
    {
        st_image_focus_area_t frame;
        uint32_t cur_val;
        uint32_t peak_val;
        bool_t peak_det_f;
    } st_image_focus_analysis_area_t;

    typedef struct
    {
        uint32_t pos_x;
        uint32_t pos_y;
        uint32_t width;
        uint32_t height;
    } st_image_info_crop_t;

    typedef struct
    {
        uint8_t jpeg_target;
        uint32_t jpeg_quality;
        uint32_t size;
    } st_image_object_jpeg_t;

    typedef struct
    {
        uint64_t handle;
        uint32_t width;
        uint32_t height;
        uint32_t code_size;
    } st_jpeg_object_t;

    typedef struct
    {
        double coef[3][3];
    } st_convert_array_t;

    typedef struct
    {
        uint32_t clip_pos_x;
        uint32_t clip_pos_y;
        uint32_t clip_width;
        uint32_t clip_height;
    } st_pos_info_t;

    typedef struct
    {
        uint16_t pos_num;
        uint32_t all_width;
        uint32_t all_height;
        st_pos_info_t pos_info[D_DETECT_MAX_NUM];
    } st_detect_area_t;

    typedef enum
    {
        D_IMAGE_IS_WEAR_MASK_UNKNOWN,
        D_IMAGE_IS_WEAR_MASK_TRUE,
        D_IMAGE_IS_WEAR_MASK_FALSE
    } e_is_wear_mask_t;

    typedef struct
    {
        st_rect_info_t rect_info;
        uint8_t pose;
        int16_t angle;
        uint8_t conf;
        e_is_wear_mask_t is_wear_mask;
    } st_face_info_t;

    typedef struct
    {
        uint16_t face_num;
        uint32_t all_width;
        uint32_t all_height;
        st_face_info_t face_info[D_DETECT_FACE_MAX_NUM];
    } st_face_object_t;

    typedef struct
    {
        st_rect_info_t rect_info;
        int16_t angle;
        uint8_t conf;
    } st_human_info_t;

    typedef struct
    {
        uint16_t num;
        uint32_t all_width;
        uint32_t all_height;
        st_human_info_t human_info[D_DETECT_HUMAN_MAX_NUM];
    } st_human_object_t;

    typedef enum
    {
        D_IMAGE_REPLACE_COND_DISABLE,
        D_IMAGE_REPLACE_COND_ENABLE,
    } e_image_replace_cond_en_t;

    typedef enum
    {
        D_IMAGE_REPLACE_MODE_NEQ,
        D_IMAGE_REPLACE_MODE_EQ,
    } e_image_replace_mode_t;

    typedef struct
    {
        e_image_replace_cond_en_t enable;
        e_image_replace_mode_t mode;
        uint8_t dat_src;
        uint8_t dat_dst;
    } st_image_replace_cond_t;

    typedef struct
    {
        st_image_replace_cond_t cond[4];
    } st_image_replace_info_t;

    typedef struct
    {
        uint16_t hnum;
        uint16_t vnum;
        uint32_t format;
        uint16_t cns_val[4];
    } st_image_fill_info_t;

    typedef enum
    {
        D_IMAGE_GAIN_DISABLE,
        D_IMAGE_GAIN_ENABLE,
    } e_image_gain_en_t;

    typedef enum
    {
        D_IMAGE_OFST_DISABLE,
        D_IMAGE_OFST_ENABLE,
    } e_image_ofst_en_t;

    typedef enum
    {
        D_IMAGE_SHFT_DISABLE,
        D_IMAGE_SHFT_ENABLE,
    } e_image_shft_en_t;

    typedef struct
    {
        e_image_gain_en_t gain_en;
        uint8_t           gain_val;
        e_image_ofst_en_t ofst_en;
        int16_t           ofst_val;
        e_image_shft_en_t shft_en;
        uint8_t           shft_val;
    } st_image_gain_info_ch_t;

    typedef struct
    {
        st_image_gain_info_ch_t channel[4];
    } st_image_gain_info_t;

    typedef enum
    {
        D_IMAGE_CLIP_DISABLE,
        D_IMAGE_CLIP_ENABLE,
    } e_image_clip_en_t;

    typedef struct
    {
        e_image_clip_en_t clip_en;
        int16_t clip_lower;
        int16_t clip_upper;
    } st_image_clip_info_ch_t;

    typedef struct
    {
        st_image_clip_info_ch_t channel[4];
    } st_image_clip_info_t;

    typedef enum
    {
        D_IMAGE_FILTER_KERNEL_3x3,
        D_IMAGE_FILTER_KERNEL_5x5,
    } e_image_filter_ksize_t;

    typedef enum
    {
        D_IMAGE_LUT_THR_OFF,
        D_IMAGE_LUT_THR_ON,
    } e_image_lut_thr_t;

    typedef void (*f_image_callback_t)(err_t err);

    int64_t B_IMAGE_StartVideoCapture(st_video_frame_info_t *input_video_info, f_image_callback_t f_callback);
    err_t B_IMAGE_Imshow(st_image_object_t *src_image_obj, st_display_info_t *output_disp_info);
    err_t B_IMAGE_Imread(int64_t source_id, st_image_info_t *image_info, int32_t n_image,
                         st_image_object_t *output_image_obj);
    int64_t B_IMAGE_StartWdrVideoCapture(st_video_frame_info_t *input_video_info, f_image_callback_t f_callback);
    err_t B_IMAGE_StopVideoCapture(int64_t source_id);
    err_t B_IMAGE_SetExposureTime(int64_t source_id, uint8_t expo_time_mode);
    err_t B_IMAGE_SetSensorGain(int64_t source_id, uint8_t s_gain_mode);
    err_t B_IMAGE_SetExposureCorrect(int64_t source_id, uint8_t expo_crct_mode);
    err_t B_IMAGE_SetWB(int64_t source_id, uint8_t wb_mode);
    err_t B_IMAGE_SetSharpness(int64_t source_id, uint8_t level);
    err_t B_IMAGE_SetContrast(int64_t source_id, uint8_t level);
    err_t B_IMAGE_SetSaturation(int64_t source_id, uint8_t level);
    err_t B_IMAGE_Set2dYNR(int64_t source_id, uint8_t level);
    err_t B_IMAGE_Set2dCNR(int64_t source_id, uint8_t level);
    err_t B_IMAGE_GetExposureSettings(int64_t source_id, st_exp_info_t *p_exp_info);
    err_t B_IMAGE_GetFocusResult(int64_t source_id, uint8_t area_id, st_image_focus_analysis_area_t *p_focus_result);
    err_t B_IMAGE_ResetFocusAssist(int64_t source_id);
    err_t B_IMAGE_SetToneMapping(int64_t source_id, int16_t tm_level);
    err_t B_IMAGE_StartMWB(int64_t source_id, f_image_callback_t f_callback);
    err_t B_IMAGE_CropImageData(st_image_object_t *p_input_img_obj, st_image_info_crop_t *p_output_info, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_EncodeJpeg(st_image_object_t *p_image_info_in, st_image_object_jpeg_t *target, st_jpeg_object_t *p_jpeg_info_out);
    err_t B_IMAGE_ResizeImageData(st_image_object_t *p_input_img_obj, st_image_info_t *p_resize, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_RotateImageData(st_image_object_t *p_input_img_obj, uint64_t rotate, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_CvtColor(st_image_object_t *p_input_img_obj, uint8_t cvt, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_ImreadV4L2(int64_t source_id, st_image_info_t *p_image_info, st_image_object_t *p_output_image_obj);
    err_t B_IMAGE_DetectFLC(f_image_callback_t f_callback);
    err_t B_IMAGE_SetFLC(int64_t source_id, uint8_t flc_type);
    err_t  B_IMAGE_SetFocusArea(int64_t source_id, uint8_t area_id, st_image_focus_area_t *p_area);
    err_t B_IMAGE_Set3dNR(int64_t source_id, bool_t enable);
    err_t B_IMAGE_SetColorMatrix(int64_t source_id, st_color_matrix *p_table);
    err_t B_IMAGE_SetGammaCurve(int64_t source_id, uint8_t gamma_curve);
    err_t B_IMAGE_WarpAffine(st_image_object_t *p_input_img_obj, st_convert_array_t *p_table, st_image_info_t *p_output_size, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_CreateFaceDetectionEngine(void);
    err_t B_IMAGE_CreatePersonDetectionEngine(void);
    err_t B_IMAGE_DetectFace(st_image_object_t *p_input_img_obj, uint8_t priority, st_detect_area_t *p_detect_area, st_face_object_t *p_face_object);
    err_t B_IMAGE_DetectPerson(st_image_object_t *p_image_info, uint8_t priority, st_detect_area_t *p_detect_area, st_human_object_t *p_human_object);
    err_t B_IMAGE_ReleaseFaceDetectionEngine(void);
    err_t B_IMAGE_ReleasePersonDetectionEngine(void);
    err_t B_IMAGE_CreateImageObject(st_image_ex_info_t *p_image_ex_info, st_image_object_t *p_image_obj);
    err_t B_IMAGE_GetImageObjectExInfo(st_image_object_t *p_image_obj, st_image_ex_info_t *p_image_ex_info);
    err_t B_IMAGE_CreateGroupObject(st_image_info_t *p_image_info, uint16_t n_buffer, uint32_t *p_group_id);
    err_t B_IMAGE_DestroyGroupObject(uint32_t group_id);
    err_t B_IMAGE_GetOutputGroupObject(uint32_t group_id, st_image_object_t *p_image_obj, void **pp_image_data);
    err_t B_IMAGE_ImreadGroupObject(uint32_t group_id, int32_t n_image, st_image_object_t *p_output_image_obj);
    err_t B_IMAGE_ReturnOutputGroupObject(uint32_t group_id, st_image_object_t *p_image_obj);
    err_t B_IMAGE_SetAudioCodecMovieStream(uint8_t audio_codec);
    err_t B_IMAGE_CalcHist(st_image_object_t *p_input_img_obj, uint8_t *p_range, uint32_t *p_hist);
    err_t B_IMAGE_Replace(st_image_object_t *p_input_img_obj, st_image_replace_info_t *p_replace_info, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_Fill(st_image_fill_info_t *p_fill_info, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_AbsDiff(st_image_object_t *p_image_info_in1, st_image_object_t *p_image_info_in2, st_image_object_t *p_image_info_out);
    err_t B_IMAGE_GainOffset(st_image_object_t *p_input_img_obj, st_image_gain_info_t *p_gain_info, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_Clip(st_image_object_t *p_input_img_obj, st_image_clip_info_t *p_clip_info, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_Filter2d(st_image_object_t *p_input_img_obj, e_image_filter_ksize_t ksize, int8_t *p_filter_coef, st_image_object_t *p_output_img_obj);
    err_t B_IMAGE_Lut(st_image_object_t *p_input_img_obj, uint8_t *p_lut_tbl, e_image_lut_thr_t *p_lut_thr, st_image_object_t *p_output_img_obj);


#ifdef __cplusplus
}
#endif

#endif // B_IMAGE_API_H

/*-----------------------------------------------------------------------------------------------*/
//	file end of "b_image_api.h"
/*-----------------------------------------------------------------------------------------------*/