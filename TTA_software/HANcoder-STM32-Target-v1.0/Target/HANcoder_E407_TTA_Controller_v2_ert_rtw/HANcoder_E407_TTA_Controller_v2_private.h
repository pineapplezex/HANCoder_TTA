/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v2_private.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v2'.
 *
 * Model version                  : 1.87
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jan  3 18:30:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_Controller_v2_private_h_
#define RTW_HEADER_HANcoder_E407_TTA_Controller_v2_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "HANcoder_E407_TTA_Controller_v2.h"

extern real_T rt_modd(real_T u0, real_T u1);
extern real_T rt_roundd(real_T u);
void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void CAN1Send(rtB_CAN1Send *localB, rtDW_CAN1Send *localDW, uint16_T
                     *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1,
                     boolean_T *rtd_Toggle_Pin_A0, uint32_T *rtd_TxID_CAN1,
                     real_T *rtd_Tx_msg_count_CAN1);
extern void CAN1Recieve_Start(void);
extern void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve
  *localDW);
extern void CAN1Recieve(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW,
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN1, uint16_T
  *rtd_Msg_Rx_Ticks_CAN1, boolean_T *rtd_New_Msg_Ready_CAN1, uint32_T
  *rtd_RxID_CAN1, uint8_T *rtd_Rx_State_CAN1, boolean_T *rtd_Toggle_Pin_A0);
extern void CAN2Recieve_Start(void);
extern void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve
  *localDW);
extern void CAN2Recieve(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW,
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
  *rtd_Msg_Rx_Ticks_CAN2, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0);
extern void CAN2Send(rtB_CAN2Send *localB, rtDW_CAN2Send *localDW, uint16_T
                     *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN2,
                     boolean_T *rtd_Toggle_Pin_A0, uint32_T *rtd_TxID_CAN2,
                     real_T *rtd_Tx_msg_count_CAN2);
extern void MeasureEXecutiontime_Start(void);
extern void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW);
extern void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW);
extern void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB);
extern void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB);
extern void BitShift(uint8_T rtu_u, rtB_BitShift *localB);
extern void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB);
extern void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW);
extern void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Receptionsubstasks *localB, const rtC_Receptionsubstasks *localC,
  rtDW_Receptionsubstasks *localDW, uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_d, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_l);
extern void COMMTaskSyncbc0_Disable(rtB_COMMTaskSyncbc0 *localB,
  rtDW_COMMTaskSyncbc0 *localDW);
extern void COMMTaskSyncbc0(boolean_T rtu_Enable, real_T rtu_TimeMark,
  rtB_COMMTaskSyncbc0 *localB, const rtC_COMMTaskSyncbc0 *localC,
  rtDW_COMMTaskSyncbc0 *localDW, real_T *rtd_Board_ID, uint16_T *rtd_Local_Ticks,
  msg_buffer_type *rtd_Msg_Rx_d, msg_buffer_type *rtd_Msg_Tx_CAN1,
  msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1,
  uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_delta_a_est, real_T *rtd_delta_f_est,
  boolean_T *rtd_new_msg_Rx_l, real_T *rtd_speed_integral, real_T
  *rtd_torque_ar_integral, real_T *rtd_torque_fr_integral);
extern void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW);
extern void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint8_T *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
  uint8_T *rtd_basic_cycle_count);
extern void ResetTxmsgcounter(boolean_T rtu_Enable, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2);
extern void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time,
  real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks);
extern void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW);
extern void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_i, uint8_T
  rtu_ValueDomainMsg_gk, uint8_T rtu_ValueDomainMsg_l, uint8_T
  rtu_ValueDomainMsg_l5, uint8_T rtu_ValueDomainMsg_m,
  rtB_CheckmsgtransmissionCAN1 *localB, const rtC_CheckmsgtransmissionCAN1
  *localC, rtDW_CheckmsgtransmissionCAN1 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, real_T
  *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count);
extern void CheckmsgtransmissionC_g_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW);
extern void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_a, uint8_T rtu_ValueDomainMsg_k, uint8_T
  rtu_ValueDomainMsg_h, uint8_T rtu_ValueDomainMsg_hq, uint8_T
  rtu_ValueDomainMsg_e, uint8_T rtu_ValueDomainMsg_o,
  rtB_CheckmsgtransmissionCAN2 *localB, const rtC_CheckmsgtransmissionCAN2
  *localC, rtDW_CheckmsgtransmissionCAN2 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count);
extern void Transmissionsubtasks_g_Disable(rtB_Transmissionsubtasks_k *localB,
  rtDW_Transmissionsubtasks_i *localDW);
extern void Transmissionsubtasks_i(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks_k *localB, const rtC_Transmissionsubtasks_i *localC,
  rtDW_Transmissionsubtasks_i *localDW, real_T *rtd_Board_ID, boolean_T
  *rtd_Error_SensorValues_NotRX, boolean_T *rtd_Error_SetValues_NotRX, uint16_T *
  rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_torque_al_set, real_T *rtd_torque_ar_set,
  real_T *rtd_torque_fl_set, real_T *rtd_torque_fr_set);
extern void BitShift19(uint8_T rtu_u, rtB_BitShift19 *localB);
extern void BitShift20(uint8_T rtu_u, rtB_BitShift20 *localB);
extern void CANManagement_Init(rtB_CANManagement *localB);
extern void CANManagement_Reset(rtDW_CANManagement *localDW);
extern void CANManagement_Start(rtDW_CANManagement *localDW);
extern void CANManagement_Disable(rtB_CANManagement *localB, rtDW_CANManagement *
  localDW);
extern void CANManagement(rtB_CANManagement *localB, const rtC_CANManagement
  *localC, rtDW_CANManagement *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type *rtd_Msg_Rx_CAN1,
  msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T *rtd_Msg_Rx_Ticks_CAN1, uint16_T
  *rtd_Msg_Rx_Ticks_CAN2, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_Toggle_Pin_A0, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2);

#endif                                 /* RTW_HEADER_HANcoder_E407_TTA_Controller_v2_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
