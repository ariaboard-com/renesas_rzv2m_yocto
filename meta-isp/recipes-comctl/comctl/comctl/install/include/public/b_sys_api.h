/*-----------------------------------------------------------------------------------------------*/
/**
	@file	b_sys_api.h
	@brief	B2SDK public header for system-related APIs
    Copyright (C) 2021 CASIO COMPUTER CO., LTD.  All rights reserved.
    Copyright (C) 2021 Renesas Electronics Corporation. All rights reserved.
*/
/*-----------------------------------------------------------------------------------------------*/

#ifndef	__B_SYS_API_H__
#define	__B_SYS_API_H__

#ifdef	__cplusplus
extern "C"
{
#endif

#define B2_WRN_SYSTEM_LOG_OUTPUT		(-101)
#define B2_ERR_SYSTEM_LOG_OUTPUT		(-301)
#define	B2_ERR_SYS_EVENT_NO_RECEIVER	(-302)
#define	B2_ERR_SYS_EVENT_FULL_TABLE		(-303)
#define	B2_ERR_SYS_EVENT_ALREADY_SET	(-304)
#define	B2_ERR_SYSTEM_ILUSE				(-328)
#define	B2_ERR_SYSTEM_DLT				(-351)

#define	D_TASK_PRI_HIGH					(1)
#define	D_TASK_PRI_MID					(2)
#define	D_TASK_PRI_LOW					(3)

#define	D_RTOS_TIMER_MODE_POL			(0)
#define	D_RTOS_TIMER_MODE_FEVR			(-1)

#define	D_SYSID_HDMI_IN					(1)
#define	D_SYSID_HDMI_OUT				(2)
#define	D_SYSID_POWER_ON				(5)
#define	D_SYSID_POWER_OFF				(6)
#define	D_SYSID_AP_CON					(9)
#define	D_SYSID_AP_DISCON				(10)

#define	D_SYS_TIME_SUMMER_TIME_ON		(0)
#define	D_SYS_TIME_SUMMER_TIME_OFF		(1)

#define	D_SYS_LOG_OUTPUT_FILE			(0)
#define	D_SYS_LOG_OUTPUT_MEMORY			(1)
#define	D_SYS_LOG_OUTPUT_UART			(5)

#define	D_SYS_LOG_KIND_NONE				(0b00000)
#define	D_SYS_LOG_KIND_FATAL			(0b00001)
#define	D_SYS_LOG_KIND_ERROR			(0b00010)
#define	D_SYS_LOG_KIND_SYSINFO			(0b00100)
#define	D_SYS_LOG_KIND_WARNING			(0b01000)
#define	D_SYS_LOG_KIND_DEBUG			(0b10000)

#define	D_SYS_LOG_UART_UNIT0			(1)
#define	D_SYS_LOG_UART_UNIT1			(2)
#define	D_SYS_LOG_UART_NONE				(0)

#define	D_SYS_MOUNT_DEVICE_1			(1)
#define	D_SYS_MOUNT_DEVICE_2			(2)

typedef void (*TSK_STRT_ADDR)(int32_t exinf);

typedef struct
{
	uint8_t rtc_sec;
	uint8_t rtc_min;
	uint8_t rtc_hour;
	uint8_t rtc_mday;
	uint8_t rtc_mon;
	uint16_t rtc_year;
	uint8_t rtc_wday;
	uint16_t rtc_yday;
	uint8_t rtc_isdst;
} st_rtc_info_t;

typedef struct
{
	uint8_t uart_unit;
	int8_t *p_filename;
} st_output_info_t;

typedef struct
{
	void *p_msghead;
} st_mbx_msgpkt_t;

typedef	void (*f_sys_event_callback_t)(int32_t param);
typedef	void (*f_sys_timer_callback_t)(err_t err);


int32_t B_SYS_CreateTask(TSK_STRT_ADDR start_address, int32_t task_priority, uint32_t stack_size);
err_t B_SYS_DeleteTask(int32_t task_id);
err_t B_SYS_DelayTask(uint32_t delay_time);
int32_t B_SYS_CreateMutex(void);
err_t B_SYS_DeleteMutex(int32_t mutex_id);
err_t B_SYS_LockMutex(int32_t mutex_id, int32_t tmout);
err_t B_SYS_UnlockMutex(int32_t mutex_id);
int32_t B_SYS_CreateMessageBuffer(uint32_t message_size);
err_t B_SYS_DeleteMessageBuffer(int32_t message_buf_id);
err_t B_SYS_SendMessageBuffer(int32_t message_buf_id, void *p_message, uint32_t message_size, int32_t tmout);
int32_t B_SYS_ReceiveMessageBuffer(int32_t message_buf_id, void *p_message, int32_t tmout);
err_t B_SYS_SetEvent(uint16_t event_id, f_sys_event_callback_t f_cb_event);
err_t B_SYS_DeleteEvent(uint16_t event_id, f_sys_event_callback_t f_cb_event);
err_t B_SYS_PowerOff(void);
int16_t B_SYS_StartTimer(uint32_t time, uint32_t num, f_sys_timer_callback_t f_call_back);
err_t B_SYS_StopTimer(int16_t timer_id);
err_t B_SYS_MeasureTime(int16_t timer_id, uint32_t *p_elapsed_time);
err_t B_SYS_GetTime(int8_t hour, uint8_t minute, st_rtc_info_t *p_rtc_param);
err_t B_SYS_SetTime(int8_t hour, uint8_t minute, st_rtc_info_t *p_rtc_param);
err_t B_SYS_SetLog(uint8_t log_output, uint8_t filter_kind, int8_t **pp_filter_tag, st_output_info_t *p_output_info);
err_t B_SYS_OutputLog(uint8_t kind, int8_t *p_tag, const int8_t *format, ...);
err_t B_SYS_SaveLog(void);
bool_t B_SYS_GetDDRManualRetrainingMode(void);
err_t B_SYS_GetTime(int8_t hour, uint8_t min, st_rtc_info_t *p_rtc_info_t);
err_t B_SYS_SetTime(int8_t hour, uint8_t min, st_rtc_info_t *p_rtc_info_t);
err_t B_SYS_GetChipTemperature(int16_t *p_temperature_tsu0, int16_t *p_temperature_tsu1);
err_t B_SYS_GetChipTemperatureMeasurementTime(uint16_t *p_measurement_time);

#ifdef __cplusplus
}
#endif

#endif	// __B_SYS_API_H__

/*-----------------------------------------------------------------------------------------------*/
//	file end of "b_sys_api.h"
/*-----------------------------------------------------------------------------------------------*/
