/*-----------------------------------------------------------------------------------------------*/
/** @file	b_image_movie_rec_api.h
	@brief	image movie rec public header
	Copyright (C) 2021 CASIO COMPUTER CO., LTD.  All rights reserved.
	Copyright (C) 2021 Renesas Electronics Corporation. All rights reserved.
*/
/*-----------------------------------------------------------------------------------------------*/
#ifndef __B_IMAGE_MOVIE_REC_API_H__
#define __B_IMAGE_MOVIE_REC_API_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* Include component file. */
#include "b_image_api.h"


#define		D_FILENAME_MAX	(20)


#define		D_CHANNEL_NON		(0)
#define		D_CHANNEL_MONO		(1)
#define		D_CHANNEL_STEREO	(2)


#define		D_DEPTH_8		(1)
#define		D_DEPTH_16		(2)


#define		D_SAMPLE_RATE_48000		(1)
#define		D_SAMPLE_RATE_44100		(2)
#define		D_SAMPLE_RATE_32000		(3)
#define		D_SAMPLE_RATE_24000		(4)
#define		D_SAMPLE_RATE_22050		(5)
#define		D_SAMPLE_RATE_16000		(6)
#define		D_SAMPLE_RATE_12000		(7)
#define		D_SAMPLE_RATE_11025		(8)
#define		D_SAMPLE_RATE_8000		(9)

#define		D_MOV_MJPEG		(1)
#define		D_MOV_H264		(2)
#define		D_MOV_H265		(3)


#define		D_IMAGE_NON_KEY_FRAME	(0)
#define		D_IMAGE_KEY_FRAME		(1)

typedef struct
{
    uint8_t				channel;
    uint32_t			depth;
    uint8_t    			sample_rate;
} st_audio_info_t;


typedef struct
{
    uint32_t			width;
    uint32_t			height;
    uint32_t    		fps;
    uint32_t    		bitrate;
    uint32_t    		codec;
    int8_t				*p_filename;
    st_audio_info_t		audio_info;
} st_movie_info_t;


typedef struct
{
	int64_t				handle;
	st_movie_info_t		mov_info;
} st_movie_object_t;


typedef struct
{
	uint64_t handle;
	uint64_t block_num;
} st_audio_object_t;


typedef struct
{
    uint16_t year;
    uint16_t month;
    uint16_t day;
    uint16_t hour;
    uint16_t minute;
    uint16_t second;
    uint16_t msec;
    uint16_t usec;
} st_video_time_info;


typedef struct
{
	uint64_t				addr;
	uint32_t				video_codec;
    uint32_t				width;
    uint32_t				height;
    uint32_t    			encode_size;
    st_video_time_info		time_info;
    uint32_t    			is_key_frame;
} st_stream_frame_info_t;


typedef struct
{
	uint64_t				addr;
	uint32_t				block_num;
    uint32_t				block_size;
    st_video_time_info		time_info;
} st_stream_audio_info_t;

typedef struct
{
    uint32_t			width;
    uint32_t			height;
    uint32_t    		input_fps;
    uint32_t    		output_fps;
    uint32_t    		bitrate;
    uint32_t    		codec;
    int8_t				*p_filename;
    st_audio_info_t		audio_info;
} st_movie_multi_info_t;

typedef struct
{
    int64_t  handle;
    st_movie_multi_info_t  mov_info;
} st_movie_multi_object_t;


typedef void (*f_movie_callback_t)(err_t err);
typedef void (*f_movie_frame_callback_t)(err_t err, st_image_object_t *p_frame_obj);
typedef void (*f_movie_audio_callback_t )(err_t err, st_audio_object_t  *p_audio_obj);


extern err_t B_IMAGE_StartMovieStream(int64_t source_id,st_movie_info_t *p_movie_info, st_movie_object_t *p_movie_object ,
							f_movie_callback_t f_callback, 
							f_movie_frame_callback_t f_frame_callback, 
							f_movie_audio_callback_t f_audio_callback);
extern err_t B_IMAGE_StopMovieStream(int64_t movie_handle, f_movie_callback_t f_callback);
extern err_t B_IMAGE_GetStreamAudioInfo(st_audio_object_t *p_audio_obj, st_stream_audio_info_t *p_audio_info);
extern err_t B_IMAGE_GetStreamFrameInfo(st_image_object_t *p_image_obj, st_stream_frame_info_t *p_frame_info);

extern err_t B_IMAGE_StartObjectToMovieStream(int64_t stream_id, st_movie_multi_info_t *p_movie_info, st_movie_multi_object_t *p_movie_object, f_movie_callback_t f_callback);
extern err_t B_IMAGE_StopObjectToMovieStream(int64_t movie_handle, f_movie_callback_t f_callback);
extern err_t B_IMAGE_EncodeRequestStream(int64_t movie_handle, st_image_object_t *p_image_object, f_movie_frame_callback_t f_frame_callback, f_movie_audio_callback_t f_audio_callback);

#ifdef __cplusplus
}
#endif

#endif // #ifndef __B_IMAGE_MOVIE_REC_API_H__

//---------------------------------------------------------------------------------------------
//	file end of "b_image_movie_rec_api.h"
//---------------------------------------------------------------------------------------------

